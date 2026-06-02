//Program to write a function to find factorial.
#include <stdio.h>
int Factorial(int n1){
    if(n1==0||n1==1){
        return 1 ;
    }
    else{
        return Factorial(n1-1)*(n1);
    }
}
int main(){
    int n ;
    printf("Please enter the number you want sum of = ");
    scanf("%d",&n);
    printf("The factorial of %d is %d.",n,Factorial(n));
}

