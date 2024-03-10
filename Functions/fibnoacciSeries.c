#include <stdio.h>
void fibnoacciSeries(int);
int main (){
    fibnoacciSeries(10);
    return 0;
}
void fibnoacciSeries(int num){
    int a=0;
    int b=1;
    int tem;
    if (num>=1){
        printf("%d\n",a);
    }
    if(num>=2){
        printf("%d\n",b);
    }
    if(num>=3){
        for(int i=3;i<=num;i++){
            tem=a+b;
            printf("%d\n",tem);
            a=b;
            b=tem;
        }
    }
}
