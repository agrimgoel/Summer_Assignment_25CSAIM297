#include<stdio.h>
#include<string.h>
struct Student{int id;char name[50];float m1,m2,m3,total,per;char grade;};
int main(){
    struct Student s[100];int n=0,ch,id,i,f;
    while(1){
        printf("1.Add 2.Display 3.Search 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter id name marks1 marks2 marks3\n");
            scanf("%d%s%f%f%f",&s[n].id,s[n].name,&s[n].m1,&s[n].m2,&s[n].m3);
            s[n].total=s[n].m1+s[n].m2+s[n].m3;
            s[n].per=s[n].total/3;
            if(s[n].per>=75)s[n].grade='A';
            else if(s[n].per>=60)s[n].grade='B';
            else if(s[n].per>=50)s[n].grade='C';
            else s[n].grade='F';
            n++;
        }
        else if(ch==2){
            for(i=0;i<n;i++)printf("%d %s %.2f %.2f %.2f %.2f %.2f %c\n",s[i].id,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].per,s[i].grade);
        }
        else if(ch==3){
            printf("Enter id to search\n");scanf("%d",&id);f=0;
            for(i=0;i<n;i++){if(s[i].id==id){printf("%d %s %.2f %.2f %.2f %.2f %.2f %c\n",s[i].id,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].per,s[i].grade);f=1;break;}}
            if(!f)printf("Not found\n");
        }
        else if(ch==4)break;
    }
    return 0;
}