//Program to find the maximum.

#include <stdio.h>

int MaxOf(int n1,int n2,int n3){
    return (n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
}
int main(){
    int a , b ,c ;
    printf("Please enter the first number = ");
    scanf("%d",&a);
    printf("Please enter the second number = ");
    scanf("%d",&b);
    printf("Please enter the third number = ");
    scanf("%d",&c);
    printf("The largest of the three number is %d .",MaxOf(a,b,c));
}