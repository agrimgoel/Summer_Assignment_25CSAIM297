#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char grade[5];
};

struct Student students[100];
int n=0;

void addStudent() {
    printf("Enter ID: ");scanf("%d",&students[n].id);
    printf("Enter Name: ");scanf("%s",students[n].name);
    printf("Enter Age: ");scanf("%d",&students[n].age);
    printf("Enter Grade: ");scanf("%s",students[n].grade);
    n++;
}

void displayStudents() {
    int i;
    for(i=0;i<n;i++)
        printf("ID:%d Name:%s Age:%d Grade:%s\n",students[i].id,students[i].name,students[i].age,students[i].grade);
}

void searchStudent() {
    char searchName[50];
    int i,found=0;
    printf("Enter Name to Search: ");scanf("%s",searchName);
    for(i=0;i<n;i++)
        if(strcmp(students[i].name,searchName)==0) {
            printf("ID:%d Name:%s Age:%d Grade:%s\n",students[i].id,students[i].name,students[i].age,students[i].grade);
            found=1;
        }
    if(!found) printf("Student not found\n");
}

void updateStudent() {
    int id,i,found=0;
    printf("Enter ID to Update: ");scanf("%d",&id);
    for(i=0;i<n;i++)
        if(students[i].id==id) {
            printf("Enter New Name: ");scanf("%s",students[i].name);
            printf("Enter New Age: ");scanf("%d",&students[i].age);
            printf("Enter New Grade: ");scanf("%s",students[i].grade);
            found=1;
        }
    if(!found) printf("Student not found\n");
}

void deleteStudent() {
    int id,i,j,found=0;
    printf("Enter ID to Delete: ");scanf("%d",&id);
    for(i=0;i<n;i++)
        if(students[i].id==id) {
            for(j=i;j<n-1;j++) students[j]=students[j+1];
            n--; found=1;
        }
    if(!found) printf("Student not found\n");
}

int main() {
    int ch;
    do {
        printf("\n1.Add Student\n2.Display Students\n3.Search Student\n4.Update Student\n5.Delete Student\n6.Exit\nEnter choice: ");
        scanf("%d",&ch);
        if(ch==1) addStudent();
        else if(ch==2) displayStudents();
        else if(ch==3) searchStudent();
        else if(ch==4) updateStudent();
        else if(ch==5) deleteStudent();
    } while(ch!=6);
    return 0;
}
