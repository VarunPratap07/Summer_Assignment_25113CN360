/*
Program to print the following pattern.

A
BB
CCC
DDDD
EEEEE

*/
#include <stdio.h>
int main(){
    int n ; 
    char c ;
    c='A' ;
    printf("Please enter the height of the pattern = ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
}