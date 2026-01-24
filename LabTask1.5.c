#include<stdio.h>
int main() {
    int input;
    printf("Multiplication table of: ");
    scanf("%d",&input);
    for(int i = 1; i <= 10; i++) {
        int j = input * i;
        printf("%d x %d = %d\n",input,i,j);
    }
}
