//Program to check Strong number.
#include <stdio.h>
int fact(int n)
{
    if(n==1||n==0){
        return 1 ;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int strong , n1 , digit , sum=0 ;
    printf("Please enter the number you want checked = ");
    scanf("%d",&strong);
    n1=strong;
    while(strong>0)
    {
        digit=strong%10 ;
        sum+=fact(digit);
        strong/=10;
    }
    if(sum==n1)
    {
        printf("The number %d is a Strong number.",n1);
    }
    else
    {
        printf("The number %d is not a Strong number.",n1);
    }
}