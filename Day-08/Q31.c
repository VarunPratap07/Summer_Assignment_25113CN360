/*
Program to print the following pattern.
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
int main(){
    int n ;
    char ch ;
    printf("Please enter the height of the pattern = ");
    scanf("%d",&n);
    for(int i=1 ; i<n+1 ; i++){
        ch='A' ;
        for(int j=1 ; j<=i ; j++){
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
}