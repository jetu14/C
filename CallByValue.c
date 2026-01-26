#include<stdio.h>
void swap(int i,int j){
    int temp = i;
    i = j;
    j = temp;
    printf("After swap.\na:%d , b:%d", i, j);
}


int main(){
    int a = 5,b=7;
    printf("Before swap.\na:%d , b:%d\n", a, b);
    swap(a,b);

}
