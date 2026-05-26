//Program to check armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int n , n2 , n3 , digits=0 , digit , sum=0  ;
    printf("Please enter the number you want checked as armstrong number = ");
    scanf("%d",&n);
    //Since n is lost and then n12 is lost.
    n2=n;
    n3=n;
    while(n>0){
        digits+=1;
        n/=10 ;
    }
    for(int i = 0 ; i<digits ; i++ ){
        digit=n2%10 ;
        sum+=pow(digit,digits);
        n2/=10;
    }
    if(sum==n3){
        printf("The number %d is an armstrong number.",n3);
    }
    else{
        printf("The number %d is not an armstrong number.",n3);
    }
}