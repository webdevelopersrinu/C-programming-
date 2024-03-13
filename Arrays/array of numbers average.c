#include<stdio.h>
int main (){
    float arr[]={1,2,3,577,68,79};
    float arrSize=sizeof(arr)/sizeof(arr[0]);
    float total =0;
    for (int i =0;i<arrSize;i++){
        total +=arr[i];
    }
    float average =total/arrSize ;
    printf("%f", average );
}
