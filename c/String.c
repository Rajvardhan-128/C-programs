#include<stdio.h>
#include <conio.h>
int main(){

    char str[50],str2[40];
    puts("Enter any string:");
    gets(str); //inputs
    puts("enter any string 2");
    gets(str2); //inputs


// if(strcmp(str,str2)==0)
//     puts("Both string are equal");

strcat(str,str2);
puts(str);

    // puts(str);
    // puts(strupr(str));
    // puts(strlwr(str));
    // puts(rev(str));
    // printf("%d",strlen(str));
    // puts("copied string below");
    // strcpy(str2,str);
    // puts(str2);



    return 0 ; 
}
