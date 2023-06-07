#include<stdio.h>

int main(){

    FILE *fp ;
    char ch;
   fp = fopen("file1.txt","w");
   printf("Enter the string:");
   do{
       scanf("%c",ch);
       fputc(ch,fp);
   } while(ch='\n');


    return 0 ; 
}