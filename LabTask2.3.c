/*3. A program should update a variable inside a function.
Write a program to change a value  using a pointer and function.*/

#include <stdio.h>

void updateValue(int *b){
    *b = 100;
}

int main(){

    int a = 20;
    printf("Value of a before update: %d\n",a);

    updateValue(&a);
    printf("Value of a after changes: %d",a);

}
