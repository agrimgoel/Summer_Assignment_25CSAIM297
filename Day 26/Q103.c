#include<stdio.h>
int main(){
int pin=1234,entered,choice;
float balance=1000,amount;
printf("Enter PIN: ");
scanf("%d",&entered);
if(entered==pin){
do{
printf("1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\nEnter choice: ");
scanf("%d",&choice);
switch(choice){
case 1:printf("Balance: %.2f\n",balance);break;
case 2:printf("Enter amount: ");scanf("%f",&amount);balance+=amount;printf("Deposited\n");break;
case 3:printf("Enter amount: ");scanf("%f",&amount);if(amount<=balance){balance-=amount;printf("Withdrawn\n");}else printf("Insufficient funds\n");break;
case 4:printf("Thank you\n");break;
default:printf("Invalid choice\n");
}
}while(choice!=4);
}else printf("Wrong PIN\n");
return 0;
}
