//Program to check Armstrong Number.
#include <stdio.h>
#include <math.h>
int Armstrong(int n){
    int n2 , n3 , digits=0 , digit , sum=0  ;
    n2=n;
    n3=n;
    while(n>0){
        digits+=1;
        n/=10 ;
    }
    for(int i = 0 ; i<digits ; i++ ){
        digit=n2%10 ;
        sum+=pow(digit,digits);
        n2/=10;
    }
    if(sum==n3){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num ;
    printf("Please enter the number you want to get checked = ");
    scanf("%d",&num);
    if(Armstrong(num)){
        printf("The number %d is a Armstrong Number.",num);
    }
    else{
        printf("The number %d is not a Armstrong Number.",num);
    }
}