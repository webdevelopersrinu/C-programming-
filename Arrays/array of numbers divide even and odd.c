#include<stdio.h>
int main (){
    int arr[]={24,45,678,356,89,784,353};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<arrSize;i++){
        if(arr[i]%2 ==0){
          printf("%d is even number\n",arr[i]);
        }else{
            printf("%d is odd number\n",arr[i]);
        }
    }
}
