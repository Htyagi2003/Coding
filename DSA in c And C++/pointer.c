//pointer is special tytpe of variable that stores any adress
//a pointer can store the adress of same data type
// int can be stored by int pointer and char be stored by char pointer
// int *p, int num;,num=25;
// & operator it si cllaed adress operator. to fiund the adress of any varibale we will nuse & operator thst why scanf alwasys use & operator to store any avaluye with in variabble by knowing its adress.
#include<stdio.h>
struct student {
    int roll;
    char name[20];
};
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int addd(int x,int y,int *d,int*c){
    *d=x+y;
    *c=x*y;
    
}
int circle(int r,float *x){
    *x=2*3.14*r;
    return 3.14*r*r;
}
int main(){
    struct student s;
    struct student *l;
    int x=5;
    printf("%u\n",&x);
    int a=12;
    int b=42;
    printf("before swaping a= %d   b=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping a= %d   b=%d\n",a,b);
    // wap to function that will take 4 inters first 2 int and 2nd two int pointer;
    int j=12;
    int y=12;
    int add,multi;
    addd(j,y,&add,&multi);
    printf(" sum=%d \n",add);
    printf("multi=%d \n",multi);
    int r;
    float area,peri;
    r=25;
    area=circle(r,&peri);
    printf("peri=%f  ,area=%f\n",peri,area);
    l=&s;
    l->roll=100;
    printf("roll==%d",l->roll);


} 
// structer with pointer ,,,,, pointer can also be type of structure 
