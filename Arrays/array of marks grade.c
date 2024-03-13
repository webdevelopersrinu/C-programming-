#include<stdio.h>
int main (){
    float arr[6]={96,87,79,89,89,92};
    float arrSize=sizeof(arr)/sizeof(arr[0]);
    float total =0;
    for (int i =0;i<arrSize;i++){
        total +=arr[i];
    }
    float average =total/arrSize;
    printf ("%f\n", average);
    if(average>80){
        printf("A grade");
    } else if(average>60){
        printf("B grade");
    }else if(average >40){
        printf("C grade");
    }else{
        printf("better luck next time");
    }
}
