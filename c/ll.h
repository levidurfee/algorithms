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
    int (*count)(Node *n);
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

int count(Node *n) {
    int i = 1;
    while(n->next != NULL) {
        i++;
        n = n->next;
    }
    return i;
}

Nodes new_ll(int data) {
    Nodes ll;
    ll.create = &create;
    ll.append = &append;
    ll.view_all = &view_all;
    ll.count = &count;
    Node n = ll.create(data);
    ll.node = n;

    return ll;
}
