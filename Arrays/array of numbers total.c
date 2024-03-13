#include<stdio.h>
int main (){
    int arr[]={1,2,3,4};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    int total =0;
    for (int i =0;i<arrSize;i++){
        total +=arr[i];
    }
    printf("%d", total);
}
