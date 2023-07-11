#include<stdio.h>

int main(){

    int a=10 , *p , **q ;
    p=&a;
    q=&p;
    printf("%d is value of a \n ",a);//value of a
    printf("%d this is address of a stored in p\n",p);//address of a
    printf("%d address stored inside p , show the value of address\n ",*p);//value stored inside the p 
    printf("%d addrees of p inside the q\n",q);
    printf("%d\n",*q);
    printf("%d",**q);






    return 0 ; 
}
