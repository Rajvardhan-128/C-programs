#include<stdio.h>

void main(){
FILE *fp ;
char  another = 'y';
char name[10];
int age ;
float bs ;
fp = fopen("Employee.txt","w");
while(another=='y')
printf("Enter the name , age & salary \n" );
scanf( "%s  %d %f \n ", name , &age , &bs);
fprintf(fp,"%s  %d %f \n",name, age , bs);
fflush(stdin);
}
another = getchar();
fclose(fp);
}