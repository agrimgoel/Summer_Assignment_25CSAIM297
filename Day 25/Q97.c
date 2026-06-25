#include<stdio.h>
int main(){
    int n1,n2,i=0,j=0,k=0;
    scanf("%d%d",&n1,&n2);
    int a[n1],b[n2],c[n1+n2];
    for(int x=0;x<n1;x++)scanf("%d",&a[x]);
    for(int x=0;x<n2;x++)scanf("%d",&b[x]);
    while(i<n1&&j<n2){
        if(a[i]<b[j])c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n1)c[k++]=a[i++];
    while(j<n2)c[k++]=b[j++];
    for(int x=0;x<n1+n2;x++)printf("%d ",c[x]);
    return 0;
}
