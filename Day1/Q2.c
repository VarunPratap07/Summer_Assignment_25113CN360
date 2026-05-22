#include<stdio.h>
int main(){
    int n , mul ;
    printf("Please enter the number of which you want multiplication table of = ");
    scanf("%d",&n);
    for(int i=1 ; i<10+1 ; i++ ){
        mul=n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }
    return 0;
}