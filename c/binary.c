#include <stdio.h>

void ln() { printf("\n"); }

int main() {
    int m, n;
    m = 100000;

    // let's shift some bits
    for(int x=10; x>0; x--) {
        n = m >> x;
        printf("%i ", n);
    }
    ln();

    for(int x=0; x<10; x++) {
        n = m << x;
        printf("%i ", n);
    }
    ln();

    // xor?
    int o = 100;
    for(int x=0; x<10; x++) {
        n = o ^ x;
        printf("%i ", n);
    }
    ln();
}
