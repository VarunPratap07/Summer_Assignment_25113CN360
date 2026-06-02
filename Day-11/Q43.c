//Pragram to write a funtion to check prime number.
#include <stdio.h>
#include <stdbool.h>
bool IsPrime(int n1){
    int sum ;
    for(int i=1 ; i<=n1 ;i++){
        if(n1%i==0){
            sum+=1 ;
        }
    }
    if(sum==2){
        return true ;
    }
    else if(n1==0||n1==1||sum!=2){
        return false ;
    }
}
int main(){
    int num ;
    printf("Please enter the number you wish to get checked = ");
    scanf("%d",&num);
    if(IsPrime(num)){
        printf("The number %d is prime.",num);
    }
    else{
        printf("The number %d is not prime.",num);
    }
}