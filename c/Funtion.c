#include<stdio.h>

int sum()//user-defined funtion 
{
    int a ,b ;
    printf("Enter the any two numbers:"); //pre-defied funtion 
    scanf("%d%d",&a,&b);
    return a + b;
}


int main(){

    
int store=sum();
printf("%d",store );
    return 0 ; 
}