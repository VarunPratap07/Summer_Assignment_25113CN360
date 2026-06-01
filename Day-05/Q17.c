//Program to check perfect number.
#include<stdio.h>
int main()
{
    int n , sum=0 ; 
    printf("Enter the number you wish to get checked = ");
    scanf("%d",&n);
    for(int i=1 ; i<n ; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("the number %d is a perfect number.",n);
    }
    else{
        printf("the number %d is a not a perfect number.",n);
    }
}