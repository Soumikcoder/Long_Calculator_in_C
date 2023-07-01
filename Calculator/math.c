#include "My_math.h"

node* addTwoNumbers(node* l1, node* l2){
    node* head=createb(NULL,NULL);
    node* ptr=head;
    int val=0;
    while(l1!=NULL || l2!=NULL||val){
       if(l1!=NULL) {
        val+=l1->data;
        l1=l1->next;
	   }
        if(l2!=NULL){
        val+=l2->data;	
        l2=l2->next;
		}
        ptr->data=val%10;
        val=val/10;
        if(ptr->next==NULL&&(l1!=NULL || l2!=NULL||val)){
        node* n=createb(ptr,NULL);
		}
        ptr=ptr->next;
    }
    return head;
}

node* substract(node* l1, node* l2){
    node* head=createb(NULL,NULL);
    node* ptr=head;
    int val=0;
    int sign=0;
    while(l1!=NULL || l2!=NULL||val){
        if(l2!=NULL){
        val+=l2->data;	
        l2=l2->next;
		}
       if(l1!=NULL) {
        val=l1->data-val;
        l1=l1->next;
	   }
	   if(val<0){
	   	ptr->data=10+val;
	   	val=1;
	   }
	   else{
	   	ptr->data=val;
	   	val=0;
	   }
        if(ptr->next==NULL&&(l1!=NULL || l2!=NULL||val)){
        node* n=createb(ptr,NULL);
		}
        ptr=ptr->next;
    }
    return head;
}


node* multiply(node* l1, node* l2){
	if(l2==NULL)
	return NULL;
	node *ans=createb(NULL,multiply(l1,l2->next));
	node* ptr=ans;
	int val=0;
	while(l1!=NULL||val){
		if(l1!=NULL) 
        val+=(l1->data*l2->data);
		ptr->data+=val%10;
		val=val/10+ptr->data/10;
		ptr->data=ptr->data%10;
		if(l1!=NULL)
		l1=l1->next;
		if(ptr->next==NULL &&(l1!=NULL||val)){
		node* n=createb(ptr,NULL);
		}
			ptr=ptr->next;
	}
	return ans;
} 

int compare(node* a,node* b){
	if(a==NULL && b==NULL)
	return -1;
	else {
	int c=compare(a->next,b->next);
	if(c==-1){
		if(a->data>b->data)
		c=1;
		else if(a->data<b->data)
		c=0;
	}
	return c;
	}
}


int larger(node* a,node* b){
	if(size(a)>size(b))
		return 1;
	else if(size(a)==size(b) && compare(a,b))
		return 1;
	else
	return 0;	
}