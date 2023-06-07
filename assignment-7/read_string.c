#include<stdio.h>

int main(){

    FILE *fp;
    char ch;
    fp=fopen("file.txt","r");
    while(ch!=EOF){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);

    return 0 ; 
}