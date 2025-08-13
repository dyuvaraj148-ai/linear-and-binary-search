#include <stdio.h>
int Search(int arr[],int k,int si,int ei){
    if(si>ei){
        return -1;
    }
    int mi=(si+ei)/2;
    if(k<arr[mi]){
        Search(arr,k,si,mi-1);
    }
    else if(k==arr[mi]){
        return mi;
    }
    else{
        Search(arr,k,mi+1,ei);
    }
}
int main(){
    int n;
    printf("enter no of elements you want to store:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in sorted order:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the element you want to search\n");
    scanf("%d",&k);
    int index=Search(arr,k,0,n-1);
    if(index==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at %d\n",index);
    }
}
