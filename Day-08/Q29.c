/*
Program to print Half pyramid.
*
**
***
****
*****
******
*******
********
*********
*/
#include <stdio.h>
int main(){
    int n ;
    printf("Please enter the height of Half Pyramid = ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
}