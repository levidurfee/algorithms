#include <stdio.h>
#include "ll.h"

int main() {
    // instantiate Linked Lists class
    Nodes ll = new_ll(4);

    // add another node with some data
    ll.append(&ll.node, 5);
    ll.append(&ll.node, 20);

    // make sure it is working
    printf("First: %i\n\n", ll.node.data);

    // add a bunch of nodes
    for(int i=0;i<5;i++) {
        ll.append(&ll.node, i);
    }

    // show all the nodes
    ll.view_all(&ll.node);

    int size;
    size = ll.count(&ll.node);
    printf("Size: %i\n", size);

    return 0;
}

