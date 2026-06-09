//Program to count the number of odd and elements in an array.
#include <stdio.h>
int main(){
    int n , odd=0 , even=0 ;
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
    for(int i=0 ; i<n ;i++){
        if(Arr[i]%2==0){
            even+=1 ;
        }
        else{
            odd++ ;
        }
    }
    printf("The number of even element is %d.\n",even);
    printf("The number of odd element is %d.\n",odd);
}