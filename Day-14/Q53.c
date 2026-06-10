//Program to implement linear search.
#include <stdio.h>
int main(){
    int n , target , found=0;
    printf("Please enter the number of element in the array = ");
    scanf("%d",&n);
    int Arr[n] ;
    printf("Please enter the elements of the array\n");
    for(int i=0 ; i<n ; i++){
        printf("Please enter element no %d = ",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("Your array is\n");
    printf("*******************************************\n");
    for(int i=0 ; i<n ;i++){
        printf("%d\n",Arr[i]);
    }
    printf("*******************************************\n");
    printf("Please enter the element you wish to search = ");
    scanf("%d",&target);
    for(int i=0 ; i<n ;i++){
        if(Arr[i]==target){
            printf("%d is present at %d index.\n",target,i);
            found++;
        }
    }
    if(found>0){
        printf("Element exist in the array %d times.\n",found);
    }
}