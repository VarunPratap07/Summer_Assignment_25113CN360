//Program for Recursive Factorial.
#include <stdio.h>
int factorial(int n)
{
    if(n==1||n==0){
        return 1 ;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int n , ans ;
    printf("Please enter the numbrer you want factorial of = ");
    scanf("%d",&n);
    ans=factorial(n);
    printf("%d",ans);
}