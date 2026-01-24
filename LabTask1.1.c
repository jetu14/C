#include <stdio.h>
int main(){
    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int array[size];
    for(int i=0; i<size; i++){
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
        }
    int searchValue;
    int found = 0;
    printf("Enter search value: ");
    scanf("%d", &searchValue);
    for(int i=0; i<size; i++){
        if(searchValue == array[i]){
            found = 1;
            printf("Value %d found at index[%d]", searchValue, i);
            break;
        }
    }
}
