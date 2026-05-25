//Program to check whether a number is prime
#include <stdio.h>
int main(){
    int n , div=0 ;
    printf("Enter the number you want to get checked = ");
    scanf("%d",&n);
    for(int i=1 ; i<n+1 ; i++ ){
        if(n%i==0){
            div+=1;
        }
    }
    if(n==1||n==0||n<0){
        printf("The number %d in not prime\n",n);
    }
    if(div==2){
        printf("The number %d is prime\n",n);
    }
    if(div>2){
        printf("The number %d is not prime\n",n);
    }
}