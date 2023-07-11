#include<stdio.h>

int main(){

    int a[2][2];
    printf("Wnter the element :");
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        /* code */
        scanf("%d",&a[i][j]);
       }
       
    }

    printf("Matrix element\n");
     for(int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        /* code */
        printf("%d ",a[i][j]);
       }
       printf("\n");
       
    }


    return 0 ; 
}