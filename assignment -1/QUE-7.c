#include<stdio.h>

int main(){

    int marks;

    printf("Enter your marks :");
    scanf("%d",&marks);

    if(marks <=39){
        printf("your are fail ");
    }
    else if (marks>=40 && marks<=49){
        printf("Your are third class pass");
    }

 else if (marks>=50 && marks<=59){
        printf("Your are second class pass");
    }
     else if (marks>=60 && marks<=79){
        printf("Your are first class pass");
    }
     else if (marks>=80 && marks<=100){
        printf("Your are distinction pass");
    }
    else{
        printf("Please type your correct marks :");
    }
    return 0 ; 
}