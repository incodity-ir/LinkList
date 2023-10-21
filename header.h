#include <stdio.h>
#include <stdlib.h>
//HEADER GURD
#ifndef HEADER_H
#define HEADER_H

struct _Node;

typedef struct _Node Node;

Node *linklist_add(Node *H,int data);

void linklist_move(Node *H,size_t n);

#endif
