
#include <stdio.h>
int main(){
    int mathematics=90;
    int general_scince=90;
    int social_studies=90;
    int telugu=90;
    int english=80;
    int hindi=70;
    float total_marks=hindi+telugu+english+mathematics+general_scince+social_studies;
    printf(" total marks is = %d\n",total_marks);
    float percentage = (total_marks / 600) * 100;
    printf(" percentage of marks is = %f", percentage);
    return 0;
}
