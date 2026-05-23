//sum of digits of a number
#include<stdio.h>
int main(){
    int n ,n2, digit ,sum=0;
    printf("Please enter the number of which you want The sum of digit of of = ");
    scanf("%d",&n);
    //Since n is lost after loop
    n2=n;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    printf("The Sum of digits of %d is %d \n",n2,sum);
    return 0;
}