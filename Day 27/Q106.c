#include<stdio.h>
#include<string.h>
struct Employee{int id;char name[50];int age;float salary;};
int main(){
    struct Employee e[100];int n=0,ch,id,i,f;
    while(1){
        printf("1.Add 2.Display 3.Search 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id name age salary\n");
            scanf("%d%s%d%f",&e[n].id,e[n].name,&e[n].age,&e[n].salary);
            n++;
        }
        else if(ch==2){
            for(i=0;i<n;i++)printf("%d %s %d %.2f\n",e[i].id,e[i].name,e[i].age,e[i].salary);
        }
        else if(ch==3){
            printf("Enter id to search\n");scanf("%d",&id);f=0;
            for(i=0;i<n;i++){if(e[i].id==id){printf("%d %s %d %.2f\n",e[i].id,e[i].name,e[i].age,e[i].salary);f=1;break;}}
            if(!f)printf("Not found\n");
        }
        else if(ch==4)break;
    }
    return 0;
}
