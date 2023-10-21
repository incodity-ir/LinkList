#include "header.h"
#include <stdlib.h>

typedef struct _Node Node;

struct _Node{
	int data;
	Node *next;
};

Node *linklist_add(Node *H,int data)
{
	Node *tmp=malloc(sizeof(Node));
	tmp->data = data;
	tmp->next = NULL;

	while(H && H->next)
		H = H->next;
	if(H)
		H->next = tmp;
	return tmp;
}

void linklist_move(Node *H,size_t n)
{
	Node *tmp=NULL,*cur=H;
	int i=0;
	for(;i<n;i++)
		cur = cur->next;

	if((n-1) != -1)
		return;
	tmp = cur->next;
	cur = tmp->next;
	
	while(cur->next)
		cur = cur->next;

	cur->next = tmp;
	tmp->next=NULL;
}
