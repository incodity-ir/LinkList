#include "header.h"
#include <stdlib.h>

struct _Node;

typedef struct _Node Node;

int main()
{
	Node *head=NULL,*tail=NULL,*cur=NULL;
	tail = linklist_add(head,10);
	if(!head) head = tail;
	
	return 0;
}

