#include<stdio.h>
 void main()
{
  int i,j,k=0,A[100],B[100],c[100],d[100],E[100],m,n,e=0;
  printf("NAME:HARSH BANSAL\n");
  printf("ROLL NO.:2100320120071\n");
  printf("enter the size of setA=");
  scanf("%d",&n);
  printf("enter the element of setA=");
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);
  printf("enter the size of setB=");
  scanf("%d",&m);
  printf("enter the element of setB=");
  for(i=0;i<m;i++)
    scanf ("%d",&B[i]);
    for(i=0;i<n;i++)
    {
        c[k]=A[i];
        k++;
    }
    for(i=0;i<n;i++)
   {
        
        for(j=0;j<m;j++)
        {
        if(c[i]==B[j])
        break;
        }
        if(j==m)
        {
            d[e]=c[i];
            e++;
        }
    }
    printf("difference of setA and setB is(A-B)={");
      for(i=0;i<e;i++)
      printf("%d ",d[i]);
      printf("}");
      k=0;
      int x=0;
  
    for(j=0;j<m;j++)
    {
        c[k]=B[j];
        k++;
    }
    for(j=0;j<m;j++)
    
    {
        
        for(i=0;i<n;i++)
        {
        if(c[j]==A[i])
        break;
        }
        if(i==n)
        {
            E[x]=c[j];
            x++;
        }
    }
    printf("\ndifference of setB and setA is(B-A)={");
      for(j=0;j<x;j++)
      printf("%d ",E[j]);
      printf("}");
      
      k=0;
      n=e;
     m=x;
      for(i=0;i<n;i++)
    {
        c[k]=d[i];
        k++;
    }
    for(i=0;i<m;i++)
    
    {
        
        for(j=0;j<n;j++);
     {
        if(E[i]==c[j])
        break;
        }
        if(j==e)
        {
            c[k]=E[i];
            k++;
        }
    }
    printf("\nsymmetric difference of  setA and setB is={");
      for(i=0;i<k;i++)
      printf("%d ",c[i]);
      printf("}");
}