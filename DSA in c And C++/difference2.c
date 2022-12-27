#include<stdio.h>
int main()
{
    int i,j,m,n,f=0,k=0;
    int a[100],b[100],c[100];
    printf("enter the size of seta");
    scanf("%d",&m);
    printf("Enter the element of seta");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the size of setb");
    scanf("%d",&n);
    printf("Enter the element of seta");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        
    }
    
    for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++){
         
        if(b[j]==a[i])
        {   f=1;
            
        }
        if(f==0){
        c[k]=a[i];
        k++;
        break;
       }
        
    }
    }
    
    
    printf("Difference operation on set a&b");
    for(i=0;i<k;i++){
        printf("%d",c[i]);
    }
    return 0;
}