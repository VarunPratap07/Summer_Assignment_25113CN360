//Program to find greatest common divisor of a number
#include <stdio.h>
int main(){
    int n1 , n2 , div1[100] , N1=0 , N2=0 , div2[100] ;
    printf("We have to calculate greatest common divisor between two numbers.\n");
    printf("Please enter the first number = ");
    scanf("%d",&n1);
    printf("Please enter the second number = ");
    scanf("%d",&n2);
    for(int i=1 ; i<n1 ; i++){
            if(n1%i==0){
                div1[N1]=i;
                N1+=1;
            }
    }
    for(int i=1 ; i<n2 ; i++){
            if(n2%i==0){
                div2[N2]=i;
                N2+=1;
            }     
    }
    printf("***************************************************\n");
    for(int i=0 ; i<N1 ; i++){
        printf("%d\n",div1[i]);
    }
    printf("***************************************************\n");
    printf("***************************************************\n");
    for(int i=0 ; i<N2 ; i++){
        printf("%d\n",div2[i]);
    }
    printf("***************************************************\n");
    //now we have arrays of divisors of two numbers
    for(int i=N1-1 ; i>=0 ; i--){
        for(int j=N2-1 ; j>=0 ; j--){
            if(div1[i]==div2[j]){
                printf("The greatest common divisor of %d and %d is %d",n1,n2,div1[i]);
                return 0;
            }
            else{
                continue;
            }
        }
    }
}