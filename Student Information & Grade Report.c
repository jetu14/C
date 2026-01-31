#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[30];
    float marks;
    char grade;
};

struct Student student[10];
int count = 0;

char calculateGrade(float marks){
    if (marks>= 80 && marks<=100)
        return 'A';
    else if (marks>= 70)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks>= 50)
        return 'D';
    else if (marks < 40)
        return 'F';

}


void insertStudent(){
    printf("Enter ID: ");
    scanf("%d", &student[count].id);

    printf("Enter Name: ");
    scanf("%s", student[count].name);

    printf("Enter Marks: ");
    scanf("%f", &student[count].marks);

    student[count].grade = calculateGrade(student[count].marks);

    count++;
    printf("Student inserted successfully.\n");
}


void searchStudent(){
    int id;
    int found = 0;

    printf("\nEnter student id to search: ");
    scanf("%d", &id);

    for(int i = 0; i<count; i++){
        if(student[i].id == id){
            printf("\nStudent found!");
            printf("\nId: %d", student[i].id);
            printf("\nName: %s", student[i].name);
            printf("\nMarks: %f", student[i].marks);
            printf("\nGrade: %c", student[i].grade);
            printf("\n");

            found = 1;
            break;
        }
    }
    if(!found){
        printf("Student not found.");
    }
}


void deleteStudent(){
    int id;
    int found = 0;
    printf("\nEnter student id to delete: ");
    scanf("%d", &id);

    for (int i=0; i<count; i++){
        if(student[i].id == id){
            for(int j=i; j<count-1; j++){
                student[j] = student[j+1];
            }
            count--;
            found = 1;
            printf("\nStudent deleted successfully.");
            break;
        }
    }
    if (!found){
        printf("\nStudent not found.\n");
    }
}


int main(){
    int choice;

    while(1){
        printf("\n\n!!! Student Grading System !!!\n\n");
        printf("1. Insert Student\n");
        printf("2. Search Student\n");
        printf("3. Delete Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        if (choice == 1){
            insertStudent();
        }
        else if (choice == 2){
            searchStudent();
        }
        else if (choice == 3){
            deleteStudent();
        }
        else if (choice == 4){
            printf("Exiting Program.........\n\n");
            break;
        }
        else{
            printf("\nInvalid choice!\n");
        }
    }
    return 0;
}
