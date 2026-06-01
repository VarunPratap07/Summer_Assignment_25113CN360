//Program to calculate sum of first n natural numbers
#include<stdio.h>
int main(){
    int n , sum=0 ;
    printf("Please enter the number = ");
    scanf("%d",&n);
    for(int i=1 ; i<n+1 ; i++ ){
        sum+=i;
    }
    printf("Sum of numbers upto %d = %d",n,sum);
    return 0;
}