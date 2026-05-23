#include<stdio.h>
int main(){
    int n ,n2, digits=0 ;
    printf("Please enter the number of which you want The Number of digit of of = ");
    scanf("%d",&n);
    //Since n is lost after loop
    n2=n;
    while(n>0){
        digits+=1;
        n=n/10;
    }
    printf("The number of digits of %d is %d \n",n2,digits);
    return 0;
}