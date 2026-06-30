#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n=0,ch,i;
    char searchTitle[50];
    do {
        printf("\n1.Add Book\n2.Display Books\n3.Search by Title\n4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter ID: ");scanf("%d",&books[n].id);
            printf("Enter Title: ");scanf("%s",books[n].title);
            printf("Enter Author: ");scanf("%s",books[n].author);
            n++;
        } else if(ch==2){
            for(i=0;i<n;i++)
                printf("ID:%d Title:%s Author:%s\n",books[i].id,books[i].title,books[i].author);
        } else if(ch==3){
            printf("Enter Title to Search: ");scanf("%s",searchTitle);
            for(i=0;i<n;i++)
                if(strcmp(books[i].title,searchTitle)==0)
                    printf("ID:%d Title:%s Author:%s\n",books[i].id,books[i].title,books[i].author);
        }
    } while(ch!=4);
    return 0;
}
