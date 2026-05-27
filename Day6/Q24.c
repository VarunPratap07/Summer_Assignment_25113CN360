//Program to find x^n without using pow function.
#include <stdio.h>
int main()
{
    int x , n , ans=1 ;
    printf("Please enter the number = ");
    scanf("%d",&x);
    printf("Please enter the power you want %d to be risen by = ",x);
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        ans*=x;
    }
    printf("%d risen to the power %d is %d.\n",x,n,ans);
}