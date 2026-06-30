#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    int age;
    char department[50];
};

int main() {
    struct Employee employees[100];
    int n=0,ch,i;
    char searchName[50];
    do {
        printf("\n1.Add Employee\n2.Display Employees\n3.Search by Name\n4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter ID: ");scanf("%d",&employees[n].id);
            printf("Enter Name: ");scanf("%s",employees[n].name);
            printf("Enter Age: ");scanf("%d",&employees[n].age);
            printf("Enter Department: ");scanf("%s",employees[n].department);
            n++;
        } else if(ch==2){
            for(i=0;i<n;i++)
                printf("ID:%d Name:%s Age:%d Department:%s\n",employees[i].id,employees[i].name,employees[i].age,employees[i].department);
        } else if(ch==3){
            printf("Enter Name to Search: ");scanf("%s",searchName);
            for(i=0;i<n;i++)
                if(strcmp(employees[i].name,searchName)==0)
                    printf("ID:%d Name:%s Age:%d Department:%s\n",employees[i].id,employees[i].name,employees[i].age,employees[i].department);
        }
    } while(ch!=4);
    return 0;
}
