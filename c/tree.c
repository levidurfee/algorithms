#include <stdio.h>

struct bst_t {
    int data;
    struct bst_t *left;
    struct bst_t *right;
};

struct bst_t create(int data) {
    struct bst_t bst;
    bst.data = data;
    return bst;
}

int main() {
    struct bst_t bst;
    bst = create(5);

    return 0;
}

