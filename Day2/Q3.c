//Program to find product of digits of a number
#include<stdio.h>
int main(){
    int n ,n2, digit ,product=1;
    printf("Please enter the number of which you want The product of digit of of = ");
    scanf("%d",&n);
    //Since n is lost after loop
    n2=n;
    while(n>0){
        digit=n%10;
        product*=digit;
        n=n/10;
    }
    printf("The product of digits of %d is %d \n",n2,product);
    return 0;
}