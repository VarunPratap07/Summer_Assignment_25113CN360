//Program to find sum and average of all the elements in an array.
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
    int sum=0 ;
    float avg ;
    for(int i=0 ; i<n ;i++){
        sum+=Arr[i];
    }
    avg=sum/n ;
    printf("Sum of all the elements is %d.\n",sum);
    printf("Average of all the elements is %f.\n",avg);
}