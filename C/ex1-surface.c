#include <stdio.h>

int main(void) {
    int i, j, k;
    scanf("%d%d%d", &i,&j,&k);
    printf("%d %d", 2*(i*j + i*k + j*k), i*j*k);
}


