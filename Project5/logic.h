#pragma once

#include "config.h"

typedef struct linknode {
	pos Pos[8];
	struct linknode* next;
	struct linknode* prev;

}linknode;
void create_linklist(linknode* head);
void append_linknode(linknode* head, int xpos);
void delete_first_node(linknode* head);
int delete_first_node_if(linknode* head);