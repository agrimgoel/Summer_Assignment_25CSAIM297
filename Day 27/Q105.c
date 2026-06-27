#include<stdio.h>
#include<string.h>
struct Student{int id;char name[50];int age;float marks;};
int main(){
    struct Student s[100];int n=0,ch,id,i,f;
    while(1){
        printf("1.Add 2.Display 3.Search 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id name age marks\n");
            scanf("%d%s%d%f",&s[n].id,s[n].name,&s[n].age,&s[n].marks);
            n++;
        }
        else if(ch==2){
            for(i=0;i<n;i++)printf("%d %s %d %.2f\n",s[i].id,s[i].name,s[i].age,s[i].marks);
        }
        else if(ch==3){
            printf("Enter id to search\n");scanf("%d",&id);f=0;
            for(i=0;i<n;i++){if(s[i].id==id){printf("%d %s %d %.2f\n",s[i].id,s[i].name,s[i].age,s[i].marks);f=1;break;}}
            if(!f)printf("Not found\n");
        }
        else if(ch==4)break;
    }
    return 0;
}
