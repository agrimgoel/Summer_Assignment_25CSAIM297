#include<stdio.h>
#include<string.h>
#define N 100
struct item{int id;char name[50];int qty;float price;}inv[N];
int main(){
int n=0,ch,i,id;
char nm[50];
while(1){
printf("1.Add\n2.Display\n3.Search\n4.Update\n5.Delete\n6.Exit\nEnter choice:");
scanf("%d",&ch);
if(ch==6)break;
switch(ch){
case 1:printf("Enter id name qty price:");scanf("%d%s%d%f",&inv[n].id,inv[n].name,&inv[n].qty,&inv[n].price);n++;break;
case 2:for(i=0;i<n;i++)printf("%d %s %d %.2f\n",inv[i].id,inv[i].name,inv[i].qty,inv[i].price);break;
case 3:printf("Enter id:");scanf("%d",&id);for(i=0;i<n;i++)if(inv[i].id==id){printf("%d %s %d %.2f\n",inv[i].id,inv[i].name,inv[i].qty,inv[i].price);break;}if(i==n)printf("Not found\n");break;
case 4:printf("Enter id to update:");scanf("%d",&id);for(i=0;i<n;i++)if(inv[i].id==id){printf("Enter new qty and price:");scanf("%d%f",&inv[i].qty,&inv[i].price);break;}if(i==n)printf("Not found\n");break;
case 5:printf("Enter id to delete:");scanf("%d",&id);for(i=0;i<n;i++)if(inv[i].id==id){for(int j=i;j<n-1;j++)inv[j]=inv[j+1];n--;break;}if(i==n)printf("Not found\n");break;
default:printf("Invalid\n");
}}}
