#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char grade[5];
};

int main() {
    struct Student students[100];
    int n=0,ch,i;
    char searchName[50];
    do {
        printf("\n1.Add Student\n2.Display Students\n3.Search by Name\n4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter ID: ");scanf("%d",&students[n].id);
            printf("Enter Name: ");scanf("%s",students[n].name);
            printf("Enter Age: ");scanf("%d",&students[n].age);
            printf("Enter Grade: ");scanf("%s",students[n].grade);
            n++;
        } else if(ch==2){
            for(i=0;i<n;i++)
                printf("ID:%d Name:%s Age:%d Grade:%s\n",students[i].id,students[i].name,students[i].age,students[i].grade);
        } else if(ch==3){
            printf("Enter Name to Search: ");scanf("%s",searchName);
            for(i=0;i<n;i++)
                if(strcmp(students[i].name,searchName)==0)
                    printf("ID:%d Name:%s Age:%d Grade:%s\n",students[i].id,students[i].name,students[i].age,students[i].grade);
        }
    } while(ch!=4);
    return 0;
}
