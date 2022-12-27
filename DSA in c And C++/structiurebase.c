//struture is a user defined data type that allows to group more than one data type together .
//eg 
#include<stdio.h>
#include<string.h>

struct student{
char name[20];
char id[20];
char class[5];
char sec[2];
int rollno;
float cgpa;
 };
void show( struct student s1){  //  use of struct with function

    printf("YOUR NAME = %s \n" ,s1.name);
    printf("YOUR id = %s \n" ,s1.id);
    printf("YOUR class = %s \n" ,s1.class);
    printf("YOUR sec = %s \n" ,s1.sec);
    printf("YOUR rollno. = %d \n" ,s1.rollno);
    printf("YOUR cgpa = %f \n" ,s1.cgpa);
}
// in the above example we deifined a data tytpe sruct studenr rhat vongain three different data type together.ei char int float
// to access any data of structure we must have to define variable of structure type.
//struct student s1;// varisable dec...
// here s1 is the object...all the variable of structure type is called object.
// an object can access any member with . operator
// in c string is not adatatype and any string in to double quotes represent a chharacter aaray . any array cant't be coppeid with asignment operator(=). so we can use here strcpy or we can input from usser gets() function.
//write a program to define structure called student that contains students id name branch and section class rollno. and cgpa with semeseter input your own details and show the output.
int main(){
    struct student s[5];
    for(int i=0;i<5;i++){
    printf("======== %d STUDENT DETAILS===========\n",i+1);
    printf("==================================\n");
    printf("ENTER YOUR NAME\n");
    gets(s[i].name);
    printf("ENTER YOUR id\n");
    gets(s[i].id);
    printf("ENTER YOUR CLASS\n");
    gets(s[i].class);
    printf("ENTER YOUR section\n");
    gets(s[i].sec);
    fflush(stdin);
    printf("ENTER YOUR rollno.\n");
    scanf("%d",&s[i].rollno);
    printf("ENTER YOUR cgpa\n");
    scanf("%f",&s[i].cgpa);
    }
    for(int i=0;i<5;i++){
    show(s[i]);
    }
    // printf("YOUR NAME = %s \n" ,s1.name);
    // printf("YOUR id = %s \n" ,s1.id);
    // printf("YOUR class = %s \n" ,s1.class);
    // printf("YOUR sec = %s \n" ,s1.sec);
    // printf("YOUR rollno. = %d \n" ,s1.rollno);
    // printf("YOUR cgpa = %f \n" ,s1.cgpa);

}
//a function can take any strcutre data as a parameter the function work as by default call by value
// we can use array for multiple key variables or multiple objects
// we called as array object
// structb student s[20];