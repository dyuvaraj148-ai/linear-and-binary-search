#include <stdio.h>
int main(){
    int n;
    printf("Enter no of elements you want to store:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the element to search:");
    scanf("%d",&k);
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("Element found at %d\n",i);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Element not found\n");
    }
}
