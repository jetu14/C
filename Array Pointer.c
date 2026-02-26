#include <stdio.h>
const int Max = 3;
int main() {
    int var[] = {10,100,200};
    int i, *ptr[Max];

    for (i = 0; i < Max; i++) {
        ptr[i] = &var[i];
        printf("Value of var[%d] = %d\n",i,*ptr[i]);
    }
}
