//Program to find smallest and largest element in an array.
#include <stdio.h>
int main(){
    int n , temp;
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
                a[j+1]=temp;
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The smallest element is %d.\n",a[0]);
    printf("The largest element is %d.\n",a[n-1]);
}