//Programs to find duplicates in an array.
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
    for(int i = 0; i < n; i++){
        int alreadyPrinted = 0;
        for(int k = 0; k < i; k++){
            if(Arr[k] == Arr[i]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if(alreadyPrinted){
            continue;
        }
        for(int j = i + 1; j < n; j++) {
            if(Arr[i] == Arr[j]) {
            printf("%d at index %d is duplicated at %d.\n",Arr[i],i,j);
            found = 1;
            }
        }
    }
    if(found==0){
        printf("No duplicates found.\n");
    }
}