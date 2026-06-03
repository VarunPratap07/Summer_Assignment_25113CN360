//Program for a funcion to check Perfect number.
#include <stdio.h>
int PerfectNum(int n){
    int sum=0 ; 
    for(int i=1 ; i<n ; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1 ;
    }
    else{
        return 0 ;
    }
}
int main(){
    int num ;
    printf("Please enter the number you want to get checked = ");
    scanf("%d",&num);
    if(PerfectNum(num)){
        printf("The number %d is a Perfect number.",num);
    }
    else{
        printf("The number %d is not a Perfect number.",num);
    }
}