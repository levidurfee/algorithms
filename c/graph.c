#include <stdio.h>
#define SIZE 4

int main() {
    int graph[SIZE][SIZE];
    // row 1
    graph[0][0] = 0;
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[0][3] = 0;
    // row 2
    graph[1][0] = 1;
    graph[1][1] = 0;
    graph[1][2] = 0;
    graph[1][3] = 1;
    // row 3
    graph[2][0] = 1;
    graph[2][1] = 0;
    graph[2][2] = 0;
    graph[2][3] = 0;
    // row 4
    graph[3][0] = 0;
    graph[3][1] = 1;
    graph[3][2] = 1;
    graph[3][3] = 0;

    int i, j;
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            printf("%i\t", graph[i][j]);
        }
        printf("\n");
    }
}
