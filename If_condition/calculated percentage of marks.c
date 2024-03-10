#include <stdio.h>
#include <stdbool.h>
int main(){
    int tel=89;
    int Hindi=79;
    int eng=86;
    int math=95;
    int so=87;
    int sin=95;
    float total =tel+Hindi+eng+math+so+sin;
    printf("%f\n", total);
    float parcent = (float)(total/600)*100;
    printf("%.1f\n", parcent);
    
    int a=parcent;
    
    printf("start \n");
    if(70<=a){
        printf("distinction\n");
    }
    if(70>a && 60<=a){
        printf("Frist class\n");
    }
    if(60>a && 50<=a){
        printf("second class\n");
    }
    if(50>a && 40<=a){
        printf(" third classe\n");
    }
    if(40>a){
        printf("failed\n");
    }
    printf("end");
    return 0;
}

