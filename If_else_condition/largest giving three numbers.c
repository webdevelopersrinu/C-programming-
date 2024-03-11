#include <stdio.h>
int main (){
    int a=9;
    int b=6;
    int c=9;
    if (a >b && a>c){
        printf ("a is largest number");
    } else {
        if(b>a && b>c){
            printf ("b is largest number");
        } else {
            if( c>a && c>b){
               printf(" c is largest number");
            } else {
                printf(" two or three numbers is equal and largest");
            }
        }
        
    }
    return 0 ;
}
