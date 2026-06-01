//Program to Recursive sum of digit 
#include <stdio.h>
int SumOfDigits(int num){
    if(num==0){
        return 0 ;
    }
    return num%10 + SumOfDigits(num/10);
}
int main(){
    int n ;
    printf("Please enter the number you want sum of digits of = ");
    scanf("%d",&n);
    printf("sum of digits of %d is %d\n",n,SumOfDigits(n));
}
