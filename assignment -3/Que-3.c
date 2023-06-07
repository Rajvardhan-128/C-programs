#include<stdio.h>
# define max_size 100 
int main(){

int arr[max_size];

int i , j ,size , count = 0 ;

printf("Enter the size of the array :\n");
scanf("%d", &size);

printf("Enter the new elemnents in array :\n");
for(i=0 ; i<size ; i++)
{
    scanf("%d",&arr[i]);
}
    for(i=0; i<size ; i++){
        for(j=i+1 ;  j<size; j++){
            if(arr[i] == arr[j])
            {
                count++ ;
                break ; 
            }
        }
    }
printf("The total no of duplicate elements  found in array = %d \n ", count);

    return 0 ; 
}