#include<stdio.h>
#define N 100
int main(){
int a[N],n,i,ch,x,pos;
printf("Enter size:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)scanf("%d",&a[i]);
while(1){
printf("1.Display\n2.Insert\n3.Delete\n4.Search\n5.Exit\nEnter choice:");
scanf("%d",&ch);
if(ch==5)break;
switch(ch){
case 1:for(i=0;i<n;i++)printf("%d ",a[i]);printf("\n");break;
case 2:printf("Enter element and position:");scanf("%d%d",&x,&pos);
if(pos>=0&&pos<=n){for(i=n;i>pos;i--)a[i]=a[i-1];a[pos]=x;n++;}else printf("Invalid\n");break;
case 3:printf("Enter position:");scanf("%d",&pos);
if(pos>=0&&pos<n){for(i=pos;i<n-1;i++)a[i]=a[i+1];n--;}else printf("Invalid\n");break;
case 4:printf("Enter element:");scanf("%d",&x);
for(i=0;i<n;i++)if(a[i]==x){printf("Found at %d\n",i);break;}if(i==n)printf("Not found\n");break;
default:printf("Invalid\n");
}}}
