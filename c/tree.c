#include <stdio.h>

struct node {
    int data;
    struct bst_t *left;
    struct bst_t *right;
};

struct node create(int data) {
    struct node bst;
    bst.data = data;
    return bst;
}

void insert(struct node *bst, int data) {
    struct node new;
    new.data = data;
    if(bst) {
        if(bst->left) {
           if(bst->left.data > data) {
               printf("yes");
           }
        }
    }
}

int main() {
    struct node bst;
    bst = create(5);
    insert(&bst, 4);

    return 0;
}

