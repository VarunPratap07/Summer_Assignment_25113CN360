//Program for a function to check Palindrome.
#include <stdio.h>
int Palindrome(int n){
    int RevNo=0 , digit , comparison; 
    comparison=n ;
    while(n>0){
        digit=n%10 ;
        RevNo=digit+RevNo*10 ;
        n/=10 ;
    }
    if(RevNo==comparison){
        return 1 ;
    }
    else{
        return 0 ;
    }
}
int main(){
    int num ;
    printf("Please enter the number you want to get checked = ");
    scanf("%d",&num);
    if(Palindrome(num)){
        printf("The number %d is a palindrome.",num);
    }
    else{
        printf("The number %d is not a palindrome.",num);
    }
}