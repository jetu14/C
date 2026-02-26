#include <stdio.h>

void updateValue (int *p){
    *p = 100;
}

int main() {
    int a = 10;
    printf("\nValue: %d",a);
    updateValue(&a);
    printf("\nUpdated Value: %d",a);

    return 0;
}
