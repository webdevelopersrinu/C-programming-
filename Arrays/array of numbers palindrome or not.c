
#include<stdio.h>
int main (){
    int arr[]={96,87,79,88,898,92};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<arrSize;i++){
        int copy=arr[i];
        int temp=0;
        while (copy>0){
            int remender =copy %10;
            temp=temp*10 +remender ;
            copy =copy/10;
        }
        if(temp == arr[i]){
            printf("%d is palindrome number\n",arr[i]);
        }else{
            printf("%d is not palindrome number\n",arr[i]);
        }
    }

}
