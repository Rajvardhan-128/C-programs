#include<stdio.h>

int main(){
int num;
FILE *fp;

if((fp=fopen("raj.txt","r"))==NULL){
    printf("error occured");
    exit(1);
}

// if(fp==NULL){
//     printf("\nUnable to create file\n") ;
//     exit(1);
// }


fscanf(fp,"%d",&num);
printf("%d",num);


// write data in file 
// printf("File created succesfully \n");

// printf("enter the varible:");
// scanf("%d",&num) ;

// fprintf(fp,"%d\n",num);

fclose(fp);
    

    return 0 ; 
}