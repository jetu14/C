#include <stdio.h>

int main() {
    int array[5];
    int sum = 0;
    int *p = array;

    for(int i = 0; i < 5; i++) {
        scanf("%d",&array[i]);
    }
    for(int i = 0; i < 5; i++) {
        sum += *(p+i);
        printf("\nArray[%d] : %d", i+1, array[i]);
    }
    printf("\nSum : %d", sum);

    return 0;
}
