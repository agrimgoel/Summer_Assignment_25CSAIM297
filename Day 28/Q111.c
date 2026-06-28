#include<stdio.h>
#include<string.h>
struct Ticket{int id;char name[50];int seats;};
int main(){
    struct Ticket t[100];int count=0,ch,id,i,s;char n[50];
    while(1){
        printf("1.Book 2.Display 3.Search 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id name seats\n");
            scanf("%d %s %d",&id,n,&s);
            t[count].id=id;
            strcpy(t[count].name,n);
            t[count].seats=s;
            count++;
        }else if(ch==2){
            for(i=0;i<count;i++)printf("%d %s %d\n",t[i].id,t[i].name,t[i].seats);
        }else if(ch==3){
            printf("Enter id to search\n");
            scanf("%d",&id);
            for(i=0;i<count;i++)if(t[i].id==id)printf("%d %s %d\n",t[i].id,t[i].name,t[i].seats);
        }else if(ch==4)break;
    }
    return 0;
}
