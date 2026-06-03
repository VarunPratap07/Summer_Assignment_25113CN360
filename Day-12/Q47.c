#include <stdio.h>
int Fibonacci(int n){
    if(n==1){
        return 0 ;
    }
    else if(n==3||n==2){
        return 1 ;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
int main(){
    int num ;
    printf("Please enter upto what term you want fibonacci series = ");
    scanf("%d",&num);
    printf("%d terms of Fibonacci series are.\n",num);
    printf("**************************************\n");
    for(int i=1 ; i<=num ; i++){
        printf("%d\n",Fibonacci(i));
    }
    printf("**************************************\n");
}