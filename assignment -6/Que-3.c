
#include <stdio.h>
struct student
{
   char a;
   int b;
   char c;
   float d;
};
int main()
{
   struct student stud1;

   printf("The size of the student structure is %d", sizeof(stud1));
   return 0;
}
