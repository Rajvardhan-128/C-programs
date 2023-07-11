// Storage class : defines the scopes and the lifetime of the variables and the funtions 
// 


//Example of AUTO and STATIC varible block BELOW :
// #include<stdio.h>
// void fun(){
//     int a=10;
//     static int b =10;
// printf("%d %d\n",a,b);
// ++a ; ++b ;
// }

// int main(){

    
// fun();
// fun();
// fun();
//     return 0 ; 
// }

//EXAMPLE of the EXTERN varible BELOW :

// #include<stdio.h>

// int a = 10 ; //global
// void  fun(){
// printf("%d\n",a);
// }

// int main(){

// printf("%d\n",a);
//     fun();
// if(1){
// printf("%d\n",a);

// }
//     return 0 ; 
// }

//EXAMPLE of the  REGISTER varible BELOW :

#include<stdio.h>



int main(){

  register int a=10 ;
printf("%d\n",a);  

    return 0 ; 
}