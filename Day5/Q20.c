//Program to print largest prime factor.
#include <stdio.h>
int main()
{
    int n , n1=0 , factors[100] , length ;
    printf("Please enter the numbers you want factors of = ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++ ){    
        if(n%i==0){
            int sum=0;
            for(int j=1 ; j<=i ; j++){
                if(i%j==0){
                    sum+=1;
                }
            }
            if(sum==2){
                factors[n1]=i;
                n1++;
            }
        }
    }
    printf("The Prime factors of %d are\n",n);
    printf("*************************************************\n");
    for(int i=0 ; i<n1 ; i++){
        printf("%d\n",factors[i]);
    }
    printf("*************************************************\n");
    printf("*************************************************\n");
    printf("The largest Prime factor of %d is %d\n",n,factors[n1-1]);
    printf("*************************************************\n");
}