#include<stdio.h>
#include<string.h>
struct Account{int id;char name[50];float balance;};
int main(){
    struct Account acc[100];int count=0,ch,id,i;char n[50];float amt;
    while(1){
        printf("1.Create 2.Deposit 3.Withdraw 4.Display 5.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id name balance\n");
            scanf("%d %s %f",&id,n,&amt);
            acc[count].id=id;
            strcpy(acc[count].name,n);
            acc[count].balance=amt;
            count++;
        }else if(ch==2){
            printf("Enter id amount\n");
            scanf("%d %f",&id,&amt);
            for(i=0;i<count;i++)if(acc[i].id==id)acc[i].balance+=amt;
        }else if(ch==3){
            printf("Enter id amount\n");
            scanf("%d %f",&id,&amt);
            for(i=0;i<count;i++)if(acc[i].id==id&&acc[i].balance>=amt)acc[i].balance-=amt;
        }else if(ch==4){
            for(i=0;i<count;i++)printf("%d %s %.2f\n",acc[i].id,acc[i].name,acc[i].balance);
        }else if(ch==5)break;
    }
    return 0;
}
