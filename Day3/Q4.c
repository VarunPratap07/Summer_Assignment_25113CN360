#include <stdio.h>
int main(){
    int n1 , n2 , div1[100] , N1=0 , N2=0 , div2[100] , gcd ,lcm ;
    printf("We have to calculate greatest common divisor between two numbers.\n");
    printf("Please enter the first number = ");
    scanf("%d",&n1);
    printf("Please enter the second number = ");
    scanf("%d",&n2);
    for(int i=1 ; i<n1+1 ; i++){
            if(n1%i==0){
                div1[N1]=i;
                N1+=1;
            }
    }
    for(int i=1 ; i<n2+1 ; i++){
            if(n2%i==0){
                div2[N2]=i;
                N2+=1;
            }     
    }
    //now we have arrays of divisors of two numbers
    for(int i=N1-1 ; i>=0 ; i--){
        for(int j=N2-1 ; j>=0 ; j--){
            if(div1[i]==div2[j]){
                gcd=div2[j];
                lcm=(n1*n2)/gcd;
                printf("the lowest common multiple of %d and %d is %d",n1,n2,lcm);
                return 0;
            }
            else{
                continue;
            }
        }
    }
}
    