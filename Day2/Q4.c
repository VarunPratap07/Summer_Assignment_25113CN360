#include <stdio.h>
#include <math.h>
int main(){
    int n ,n2, digits=0 , digit , revnum=0 ;
    printf("Please enter the number of which you want The Number of digit of of = ");
    scanf("%d",&n);
    //Since n is lost after loop
    n2=n;
    while(n>0){
        n=n/10;
        digits+=1;
    }
    n=n2;
    while(n>0){
        digit=n%10;
        revnum+=digit*(pow(10,digits-1));
        digits-=1;
        n=n/10;
    }
    printf("%d\n",revnum);
    if(n2==revnum){
        printf("The no %d is a palindrome",n2);
    }
    return 0;
}