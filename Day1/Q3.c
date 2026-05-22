#include<stdio.h>
int main(){
    int n , fact=1 ;
    printf("Please enter the number of which you want Factorial of = ");
    scanf("%d",&n);
    for(int i=1 ; i<n+1 ; i++ ){
        fact=fact*i;
    }
    printf("The factorial of %d is %d\n",n,fact);
    return 0;
}