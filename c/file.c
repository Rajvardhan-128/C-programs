#include<stdio.h>

int main(){
int num;
FILE *fp;

fopen("raj2.txt","w");

if(fp==NULL){
    printf("\nUnable to create file\n") ;
    exit(1);
}
printf("File created succesfully \n");

printf("enter the varible:");
scanf("%d",&num) ;

fprintf(fp,"%d\n",num);

fclose(fp);
    

    return 0 ; 
}
