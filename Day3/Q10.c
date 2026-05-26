//Program to print prime numbers in a range
#include <stdio.h>
int main(){
    int l1 , l2  , div=0 ;
    printf("Enter the loer limit you want to get prime numbers from = ");
    scanf("%d",&l1);
    printf("Enter the upper limit you want to get prime numbers upto = ");
    scanf("%d",&l2);
    for(int i=l1 ; i<l2+1 ; i++ ){
        if(i==1||i<0){
            continue;
        }
        for(int j=1 ; j<i+1 ; j++){
            if(i%j==0){
                div+=1;
            }        
        }
        if(div==2){
            printf("%d\n",i);
        }
        div=0;
    }
}