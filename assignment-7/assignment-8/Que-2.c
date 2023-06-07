#include<stdio.h>
#include <stdlib.h>
int main(){

   FILE *fp ,*fh ;
   char ch ;
   fp =fopen("file1.txt","r");
   if (fp=NULL){
       printf("file doen't exist");
       exit (0);
   }
   fh= fopen ("file3.txt","W");

   while (ch!=EOF)
   {
       ch =fgetc(fp);
       fputc(ch,fh);
   }
fclose(fp);
fclose(fh);
}