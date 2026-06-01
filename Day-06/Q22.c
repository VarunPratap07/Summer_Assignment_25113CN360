//Program to convert binary number to decimal number
#include <stdio.h>
#include <math.h>
int main()
{
    int n , digit , i=0 , sum=0 , n2  ;
    printf("Please enter the decimal number = ");
    scanf("%d",&n);
    n2=n ;
    while(n>0){
        digit=n%10;
        sum+=digit*pow(2,i);
        n/=10;
        i++;
    }
    printf("%d is the decimal number of %d.",sum,n2);
}