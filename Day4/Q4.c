//Program to get armstrong numbers in a particular limit 
#include <stdio.h>
#include <math.h>
int main()
{
    int l1 , l2 , n1 , n2 , digits=0 , digit , sum=0  ;
    printf("Please enter the Lower limit you want armstrong numbers from = ");
    scanf("%d",&l1);
    printf("Please enter the Upper limit you want armstrong numbers from = ");
    scanf("%d",&l2);
    printf("**********************************************************************\n");
    printf("The armstrong number between %d and %d are. \n",l1,l2);
    printf("**********************************************************************\n");
    for(int i=l1 ; i<=l2 ; i++ ){
        //Reset no of digits and sum
        digits = 0;
        sum = 0;
        //Since i is lost inside while
        n1=i ;
        n2=i ;
        while(n1>0){
            digits+=1;
            n1/=10 ;
        }
        for(int i = 0 ; i<digits ; i++ ){
            digit=n2%10 ;
            sum+=pow(digit,digits);
            n2/=10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
    printf("**********************************************************************\n"); 
}