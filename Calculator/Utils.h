#pragma once

#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char data;
	struct node* next;
} node;

node* create(node* root,int val);
node* createb(node* prev,node* nex);
node* freeb(node* root);
int size(node* a);
void display(node* root,int sign);
node* input(node* a,int *s);
int compare(node* a,node* b);
int larger(node* a,node* b);
node* reverse(node* l,node** head);