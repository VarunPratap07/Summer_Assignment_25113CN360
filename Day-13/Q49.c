//Program to input and display an Array.
#include <stdio.h>
int main(){
    int n ;
    printf("Please enter the number of element in the array = ");
    scanf("%d",&n);
    int Arr[n] ;
    printf("Please enter the elements of the array\n");
    for(int i=0 ; i<n ; i++){
        printf("Please enter element no %d = ",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("Your array is\n");
    printf("*******************************************\n");
    for(int i=0 ; i<n ;i++){
        printf("%d\n",Arr[i]);
    }
    printf("*******************************************\n");
}