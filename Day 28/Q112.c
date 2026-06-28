#include<stdio.h>
#include<string.h>
struct Contact{int id;char name[50];char phone[20];};
int main(){
    struct Contact c[100];int count=0,ch,id,i;char n[50],p[20];
    while(1){
        printf("1.Add 2.Display 3.Search 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id name phone\n");
            scanf("%d %s %s",&id,n,p);
            c[count].id=id;
            strcpy(c[count].name,n);
            strcpy(c[count].phone,p);
            count++;
        }else if(ch==2){
            for(i=0;i<count;i++)printf("%d %s %s\n",c[i].id,c[i].name,c[i].phone);
        }else if(ch==3){
            printf("Enter id to search\n");
            scanf("%d",&id);
            for(i=0;i<count;i++)if(c[i].id==id)printf("%d %s %s\n",c[i].id,c[i].name,c[i].phone);
        }else if(ch==4)break;
    }
    return 0;
}
