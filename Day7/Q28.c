//Program to Recursive reverse number.
#include <stdio.h>
int rev=0;//Global Variables
void ReverseNum(int num){
    if(num<=0){
        return;
    }
    rev = rev * 10 + num % 10;
    ReverseNum(num / 10);
}
int main(){
    int n , n2 ;
    printf("Please enter the number you want reversed = ");
    scanf("%d",&n);
    n2=n;
    ReverseNum(n);
    printf("%d is the reverse of %d.",rev,n2);
}
