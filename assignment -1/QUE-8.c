#include<stdio.h>

int main(){

 int a  , b , cal ;

 printf("Please choose your option :\n"
 "1.Addition :\n"
 "2.Substraction :\n"
 "3.Multiplication :\n"
 "4.Division :\n");

 printf("Option :");
 scanf("%d",&cal);

 printf("Enter your first number :\n");
 scanf("%d",&a);
 printf("Enter your second number :\n");
 scanf("%d",&b);

 switch(cal)
 {
     case 1 :
     printf("the addition of the two numbers is :%d", a + b);
break ;
 case 2 :
     printf("the substraction of the two numbers is :%d", a - b);
break ;
 case 3:
     printf("the multiplication  of the two numbers is :%d", a * b);
break ;
 case 4 :
     printf("the division of the two numbers is :%d", a / b);
break ;
default :
printf("choose the option :");
 }


    return 0 ; 
}