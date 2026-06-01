//Program for recursive Fibonacci series 
#include <stdio.h>
int fibonacci(int n){
    if(n<=1){
        return n ;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    int n ;
    printf("Please enter the number you want factorial of = ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d term\n",n);
    for(int i=0 ; i<n ; i++){
        printf("%d\n",fibonacci(i));
    }
}