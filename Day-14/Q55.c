//Program to find the second largest element.
#include <stdio.h>
int main(){
    int n , temp ,secondlargest;
    printf("Please enter the number of element in the array = ");
    scanf("%d",&n);
    int a[n] ;
    printf("Please enter the elements of the array\n");
    for(int i=0 ; i<n ; i++){
        printf("Please enter element no %d = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Your array is\n");
    printf("*******************************************\n");
    for(int i=0 ; i<n ;i++){
        printf("%d\n",a[i]);
    }
    printf("*******************************************\n");
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(a[j+1]<a[j]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    //Considering no negative element.
    secondlargest=-1;
    int largest ;
    largest=a[n-1];
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]!=largest){
            secondlargest=a[i];
            break;
        }
        else{
            continue;
        }
    }
    if(secondlargest == -1){
        printf("There is no second largest element.\n");
    }
    else{
        printf("The second largest element is %d.\n", secondlargest);
    }
}