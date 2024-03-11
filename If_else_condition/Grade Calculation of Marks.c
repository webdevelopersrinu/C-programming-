#include <stdio.h>
int main (){
    int mathematics=90;
    int general_scince=90;
    int social_studies=90;
    int telugu=90;
    int english=80;
    int hindi=70;
    float total_marks=hindi+telugu+english+mathematics+general_scince+social_studies;
    float percentage = (total_marks / 600) * 100;
    float a=percentage;
    if(a>70){
        printf("district pass");
    }else{
        if(a<=70 && a>60){
            printf ("first class");
        }else{
            if(a<=60 && a>50){
                printf("second class");
            } else {
                printf("fail");
            }
        }
    }
    return 0 ;
}
