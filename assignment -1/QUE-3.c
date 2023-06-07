#include <stdio.h>
 int main (){

char c ;
int low , upper ;
printf("Enter the charcter : " );
scanf("%c", &c);
 
low = ( c=='a' || c =='e' || c=='i' || c=='o' || c=='u');
upper = ( c=='A' || c == 'E' || c== 'I' || c== 'o' || c== 'U' );

if (low || upper ){
printf("this is vowel : %c " , c );

}
else {
printf ("This consonant :%c " , c );
}



return 0 ;
} 