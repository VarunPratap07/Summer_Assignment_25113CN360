//Program to convert decimal number to binary number
#include <stdio.h>
int main()
{
    int n , n2 , ans=0 , add=1 , r ;
    printf("Please enter the number you want converted to binary = ");
    scanf("%d",&n);
    n2=n ;
    while(n>0)
    {
        r=n%2 ;
        if(r==1){
            ans+=add;    
        }
        n/=2 ;
        add*=10;
    }
    printf("%d is the binary number of %d.",ans,n2);
}