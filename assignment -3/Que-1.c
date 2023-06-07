#include<stdio.h>

void reverse(int *arr,int size){
 int temp;
    for(int i=0;i<size/2;i++){
      temp=arr[i];
      arr[i]=arr[size-1-i];
      arr[size-1-i]=temp;  
    }
    for(int j=0;j<size;j++){
        printf(" %d ",arr[j]);
    }
}

int main(){

    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf(" %d ",arr[i]);
    }
    printf("\nReversed array is : \n");
    reverse(&arr,5);

    return 0 ; 
}