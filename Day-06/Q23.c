//Program to count set bits of a number.
#include <stdio.h>
int main()
{
    int n , n2 , temp , ans=0 , bits=0 , add=1 , r ;
    printf("Please enter the number you want to count set bits of = ");
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
    printf("%d is the binary number of %d.\n",ans,n2);
    while(ans>0){
        temp=ans%10;
        if(temp==1){
            bits+=1 ;
        }
        ans/=10 ;
    }
    printf("%d is the number of set bits of %d.\n",bits,n2);
}