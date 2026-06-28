#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Book{int id;char title[50];char author[50];};
int main(){
    struct Book books[100];int count=0,ch,id,i;char t[50],a[50];
    while(1){
        printf("1.Add 2.Display 3.Search 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id title author\n");
            scanf("%d %s %s",&id,t,a);
            books[count].id=id;
            strcpy(books[count].title,t);
            strcpy(books[count].author,a);
            count++;
        }else if(ch==2){
            for(i=0;i<count;i++)printf("%d %s %s\n",books[i].id,books[i].title,books[i].author);
        }else if(ch==3){
            printf("Enter id to search\n");
            scanf("%d",&id);
            for(i=0;i<count;i++)if(books[i].id==id)printf("%d %s %s\n",books[i].id,books[i].title,books[i].author);
        }else if(ch==4)break;
    }
    return 0;
}
