#include <stdlib.h>
#include "logic.h"
void create_linklist(linknode* head) {
    head->next = nullptr;
    head->prev = nullptr;
}
void append_linknode(linknode* head, int xpos) {
    linknode* newnode = (linknode*)malloc(sizeof(linknode));
    for (int i = 0; i < 8; i++) {
        newnode->Pos[i].x = xpos;
        newnode->Pos[i].y = 0 + 80 * i;
    }
}
void delete_first_node(linknode* head) {
    if (head == NULL) return;
    if (head->next == NULL) return;

    linknode* first = head->next;
    linknode* second = first->next;

    head->next = second;

    if (second != NULL) {
        second->prev = head;
    }

    free(first);
}