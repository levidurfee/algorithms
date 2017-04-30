#include <stdio.h>

typedef struct d_ll {
    int data;
    struct d_ll *next;
} d_ll;

typedef struct dbl {
    struct d_ll node;
    int (*append)(struct dbl *d, int data);
} dbl;

dbl new_dbl(int data) {
    d_ll node;
    node.data = data;
    node.next = &node; // loops back to self

    dbl dll;
    dll.node = node;

    return dll;
}

int main() {
    new_dbl(5);

}
