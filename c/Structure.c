#include<stdio.h>

struct stu{
    int roll;
char name[20];
double marks;

}s;



int main(){

    
// struct stu s ;
 
 printf("Enter the student record :");
 scanf("%d%s%lf",&s.roll,&s.name,&s.marks);
 printf("%d %s %lf",s.roll,s.name,s.marks);

    return 0 ; 
}