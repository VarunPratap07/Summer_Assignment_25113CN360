/*Program to print the print the following pattern.
1
22
333
4444
55555
*/
#include<stdio.h>
int main(){
    int n;
    int digit=1;
    printf("Please enter the height of the pattetn = ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%d",digit);
        }
        digit++;
        printf("\n");
    } 
}