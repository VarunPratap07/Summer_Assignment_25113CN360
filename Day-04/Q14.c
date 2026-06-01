//Program to print n'th term of fibonacci series
#include <stdio.h>
int main()
{
    int n , term1=0 , term2=1 , nexterm ;
    printf("Please enter the term of fibonacci series you want = ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++ ){
        nexterm = term1 + term2;
        term1 = term2;
        term2 = nexterm;
    }
    printf("%d\n", term1);
}