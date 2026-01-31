#include<stdio.h>
struct Employee{
    char name[20];
    int age;
    long long mobileNumber;
};
struct Employee employee[2];
void displayInformation(struct Employee employee[]){
    for(int i = 0; i < 2; i++){
        printf("\nPerson number %d information\n", i + 1);
        printf("Name: %s\n", employee[i].name);
        printf("Age: %d\n", employee[i].age);
        printf("Mobile Number: %lld\n", employee[i].mobileNumber);

    }
}
int main(){
    printf("Input employees information here.");

    for(int i = 0; i < 2; i++){
        printf("\nName: ");
        scanf("%s", &employee[i].name);

        printf("Age:");
        scanf("%d", &employee[i].age);

        printf("sMobile Number : ");
        scanf("%lld", &employee[i].mobileNumber);
    }
    displayInformation(employee);
    return 0;
}
