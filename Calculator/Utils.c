#include "Utils.h"

node* create(node* root,int val){
	node* n=(node*)malloc(sizeof(node));
		n->data=val;
		n->next=root;
		return n;
}

node* createb(node* prev,node* nex){
	node* n=(node*)calloc(1,sizeof(node));
	n->next=nex;
	if(prev!=NULL)
	prev->next=n;	
}

node* freeb(node* root){
	node* tmp=root;
	while(root){
		tmp=root;
		root=root->next;
		free(tmp);
	}
	return NULL;
}


int size(node* a){
	if(a==NULL)
	return 0;
	else
	return size(a->next)+1;
}

void display(node* root,int sign){
	if(root==NULL)
	return;
	else{
	display(root->next,sign);
	if(root->next==NULL && sign)
	printf("-");
	printf("%d",root->data);
	}
}


node* input(node* a,int *s){
	int val;
	char q=getchar();
	if(q=='-'){
		*s=1;
		q=getchar();
	}
	while((q>='0'&&q<='9')){
	val=q-'0';
	a=create(a,val);
		q=getchar();
	}
	return a;
}


node* reverse(node* l,node** head){
	if(l->next==NULL)
	*head=l;
	else{
		node* tmp=reverse(l->next,head);
		tmp->next=l;
		l->next=NULL;
	}
		return l;
}
