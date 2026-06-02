//Program to write function to find sum of two numbers.
#include <stdio.h>
int Sum(int n1 , int n2){
    return n1+n2;
}
int main(){
    int a,b ;
    printf("Please enter the first number = ");
    scanf("%d",&a);
    printf("Please enter the second number = ");
    scanf("%d",&b);
    printf("Sum of the two numbers %d and %d is %d.",a,b,Sum(a,b));
}