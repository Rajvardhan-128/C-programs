#include<stdio.h>

int main(){

    int unit , charge;
printf("Enter your unit here :");
scanf("%d",&unit);
S

    if(unit <= 200){
        printf("your bill is: %d",unit (0.50));
    }
if(unit >=201 && unit <=400){
        printf("your bill is : %d",unit (100+0.65));
    }
    if(unit > 400 && unit <= 600){
        printf("your bill is : %d",unit*(230+0.80));
    }
    // else{
    //     printf("ENter corrcet unit here");
    // }
    return 0 ; 
}