#include<stdio.h>
int main(){
    int m1[5][5];
    int m2[5][5];
    int m3[10][10];
    printf("enter the elements of m1;\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the elements of m2;\n");

        for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }    
    }
    printf("sum of matrices;\n");
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    
    }
      for(int i=0;i<3;i++){ 
        for (int j=0;j<3;j++){
            printf("%d  ",m3[i][j]);
        }
          printf("\n");
    }
    return 0;

}