/*
Pogram to print the following pattern-- Character Pyramid.

    A                            
   ABA                           
  ABCBA                          
 ABCDCBA                         
ABCDEDCBA                        

*/
#include <stdio.h>
int main(){
    int n ;
    char c ;
    printf("Please enter the height of the pattern = ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        c='A';
        for(int j=1 ; j<=2*n+2 ; j++){
                if(j>=n-(i-1) && j<=n){
                    printf("%c",c) ;
                    c++ ;
                }
                else if(j>n && j<=n+(i-1)){
                    if(j==n+1){
                        c-=2 ;
                        printf("%c",c) ;
                    }
                    else{
                        c--;
                        printf("%c",c) ;
                    }
                }
                else{
                    printf(" ");
                }              
        }
        printf("\n");
    }
}