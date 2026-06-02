/*
Pogram to print the following pattern-- Number Pyramid.

    1       
   121      
  12321     
 1234321    
123454321

*/
#include <stdio.h>
int main(){
    int n ;
    int digit ;
    printf("Please enter the height of the pattern = ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        digit=1;
        for(int j=1 ; j<=2*n+2 ; j++){
                if(j>=n-(i-1) && j<=n){
                    printf("%d",digit) ;
                    digit++ ;
                }
                else if(j>n && j<=n+(i-1)){
                    if(j==n+1){
                        digit-=2 ;
                        printf("%d",digit) ;
                    }
                    else{
                        digit--;
                        printf("%d",digit) ;
                    }
                }
                else{
                    printf(" ");
                }              
        }
        printf("\n");
    }
}