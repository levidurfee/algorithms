#include <stdio.h>
#include "ll.h"

int main() {
    // instantiate Linked Lists class
    Nodes ll;
    // assign the methods
    ll.create = &create;
    ll.append = &append;
    ll.view_all = &view_all;
    ll.count = &count;

    // call the construct with some data
    Node n = ll.create(4);

    // add another node with some data
    ll.append(&n, 5);
    ll.append(&n, 20);

    // make sure it is working
    printf("%i\n", n.data);

    // add a bunch of nodes
    for(int i=0;i<100;i++) {
        ll.append(&n, i);
    }

    // show all the nodes
    ll.view_all(&n);

    int size;
    size = ll.count(&n);
    printf("Size: %i\n", size);

    return 0;
}

