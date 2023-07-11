#include<stdio.h>

int main(){

    int i=1 ;
    label:
        printf("%d",i);
        ++i;
    if(i<=10)
    goto label;
   
    printf("learn coding");
    

    return 0 ; 
}