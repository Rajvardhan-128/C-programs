#include<stdio.h>

union stu{
    int roll;
char name;
double marks;

};



int main(){

    
union stu u;
printf("%d",sizeof(u));
 
//  printf("Enter the  roll no student  :");
//  scanf("%d",&s.roll);
//  printf("%d \n ",s.roll);

//   printf("Enter the Name of student  :");
//  scanf("%s",&s.name);
//  printf("%s \n ",s.name);

//   printf("Enter the  marks student  :");
//  scanf("%d ",&s.marks);
//  printf("%d \n ",s.marks);


    return 0 ; 
}