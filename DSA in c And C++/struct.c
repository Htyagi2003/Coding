#include<stdio.h>
struct student
{
    char name[20];
    char branch[5];
    char sec;
    int year;
    char grade;

};
int main(){
     struct student s[5];
    for (int i = 0; i < 2; i++)
    {
        printf("enter the name of student\n");
        gets(s[i].name);
        printf("enter the branch\n");
        gets(s[i].branch);
        printf("enter the section\n");
        scanf("%c",&s[i].sec);
        fflush(stdin);
        printf("enter the grade\n");
        scanf("%c",&s[i].grade);
        fflush(stdin); 
        printf("enter the year\n");
        scanf("%d",&s[i].year);
        fflush(stdin);
        
    }
    for (int i = 0; i < 2; i++)
    {
        printf("name of student %d: %s\n",i+1,s[i].name);
        printf("the branch %d: %s\n",i+1,s[i].branch);
        printf("the section %d: %c\n",i+1,s[i].sec);
        printf("the grade %d: %c\n",i+1,s[i].grade); 
        printf("the year %d: %d\n",i+1,s[i].year);
        
    }
    
}
