//Program to print fibonacci series
#include <stdio.h>
int main()
{
    int n , term1=0 , term2=1 , nexterm ;
    printf("Please enter the number of terms of fibonacci series you want = ");
    scanf("%d",&n);
    printf("%d Terms of Fibonacci Series are = \n");
    for(int i=0 ; i<n ; i++ ){
        printf("%d\n", term1);
        nexterm = term1 + term2;
        term1 = term2;
        term2 = nexterm;
    }
}