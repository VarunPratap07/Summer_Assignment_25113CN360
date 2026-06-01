//Print factors of a number.
#include <stdio.h>
int main()
{
    int n , n1=0 , factors[100] , length ;
    printf("Please enter the numbers you want factors of = ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++ ){    
        if(n%i==0){
            factors[n1]=i;
            n1++;
        }
    }
    printf("The factors of %d are\n",n);
    printf("*************************************************\n");
    for(int i=0 ; i<n1 ; i++){
        printf("%d\n",factors[i]);
    }
    printf("*************************************************\n");
}