
#include<stdio.h>
int main (){
    int arr[]={5,9,3,21,11};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<arrSize;i++){
        int count =0;
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i]%j ==0){
                count++;
            }
        }
        if(count==0){
            printf("%d is prime number\n",arr[i]);
        }else{
            printf("%d is not prime numbers\n",arr[i]);
        }
    }

}
