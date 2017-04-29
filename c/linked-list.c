#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct {
    Node node;
    Node (*create)(int data);
    int (*append)(Node *n, int data);
    int (*view_all)(Node *n);
} Nodes;

Node create(int data) {
    Node list;
    list.next = NULL;
    list.data = data;
    return list;
}

int append(Node *n, int data) {
    Node *current = n;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = malloc(sizeof(Node));
    current->next->data = data;
    current->next->next = NULL;
    return 0;
}

int view_all(Node *n) {
    printf("%i\n", n->data);
    while(n->next != NULL) {
        n = n->next;
        printf("%i\n", n->data);
    }
    return 0;
}

int main() {
    // instantiate Linked Lists class
    Nodes ll;
    // assign the methods
    ll.create = &create;
    ll.append = &append;
    ll.view_all = &view_all;

    // call the construct with some data
    Node n = ll.create(4);

    // add another node with some data
    ll.append(&n, 5);
    ll.append(&n, 20);

    // make sure it is working
    printf("%i\n", n.data);

    // show all the nodes
    ll.view_all(&n);
    return 0;
}

