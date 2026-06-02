/*
Pogram to print the following pattern--Reverse Star Pyramid.

*********
 ******* 
  *****  
   ***   
    *      

*/
#include <stdio.h>
int main(){
    int n ;
    printf("Please enter the height of the pattern = ");
    scanf("%d",&n);
    for(int i=n ; i>=1 ; i--){
        for(int j=2*n-1 ; j>=1 ; j--){
                if(j >= n-(i-1) && j <= n+(i-1)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
        }
        printf("\n");
    }
}