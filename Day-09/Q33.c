/*
Program to print the following pattern.--Reverse Star Pattern

*****
****
***
**
*

*/
#include <stdio.h>
int main(){
    int n ;
    printf("Please enter the height of the pattern = ");
    scanf("%d",&n);
    for(int i=n ; i>=1 ; i--){
        for(int j=i ; j>=1 ; j--){
            printf("*");
        }
        printf("\n");
    }
}