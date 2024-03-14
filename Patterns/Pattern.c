#include<stdio.h>
void rightHalfPyramid(int);
void leftHalfPyramid(int);
void fullPyramid(int);
void invertedRightHalfPyramid(int);
void invertedLeftHalfPyramid(int);
void invertedFullPyramid(int);
void rhombus(int);
void diamondPattern(int);
void hourglassPattern(int);
void hollowSquarePattern(int);
void hollowFullPyramid(int);
void hollowInvertedFullPyramid(int);
void hollowDiamond(int);
void hollowHourglass(int);
void floydTriangle(int);
void PascalsTriangle(int);
int main () {
   PascalsTriangle(5);
   return 0;
}
//pattern 1
void rightHalfPyramid(int n) {
    for(int row=0; row<n; row++) {
        for(int col=0; col<row+1; col++) {
            printf("*");
        }
        printf("\n");
    }
}
//pattern 2
void leftHalfPyramid(int n) {
    for(int row=0; row<n; row++) {
        for(int col1=0; col1<n-row-1; col1++) {
            printf(" ");
        }
        for(int col2=0; col2<row+1; col2++) {
            printf("*");
        }
        printf("\n");
    }
}
//pattern 3
void fullPyramid(int n) {
    for(int row=0; row<n; row++) {
        for(int col1=0; col1<n-row-1; col1++) {
            printf("  ");
        }
        for(int col2=0; col2<2*row+1; col2++) {
            printf("* ");
        }
        printf("\n");
    }
}
//pattern 4
void invertedRightHalfPyramid(int n) {
    for(int row=0; row<n; row++) {
        for(int col=0; col<n-row; col++) {
            printf("*");
        }
        printf("\n");
    }
}
//pattern 5
void invertedLeftHalfPyramid(int n) {
    for(int row=0; row<n; row++) {
        for(int col1=0; col1<row; col1++) {
            printf(" ");
        }
        for(int col2=0; col2<n-row; col2++) {
            printf("*");
        }
        printf("\n");
    }
}
//pattern 6
void invertedFullPyramid(n) {
    for(int row=0; row<n; row++) {
        for(int col1=0; col1<row; col1++) {
            printf("  ");
        }
        for(int col2=0; col2<2*n-(2*row+1); col2++) {
            printf("* ");
        }
        printf("\n");
    }
}
//pattern 7
void rhombus(n) {
    for(int row=0; row<n; row++) {
        for(int col1=0; col1<n-row-1; col1++) {
            printf("  ");
        }
        for(int col2=0; col2<n; col2++) {
            printf("* ");
        }
        printf("\n");
    }
}
//pattern 8
void diamondPattern(n) {
    for(int row=0; row<2*n-1; row++) {
        int space=row>n-1?row+1-n:n-row-1;
        for(int col1=0; col1<space; col1++) {
            printf(" ");
        }
        int star =row>n-1?2*n-(row-n)*2-3:row*2+1;
        for(int col2=0; col2<star; col2++) {
            printf("*");
        }
        printf("\n");
    }
}
//pattern 9
void hourglassPattern(n) {
    for(int row=0; row<2*n-1; row++) {
        //printf("%d ",row);
        int space =row>n-1?n*2-row-2:row;
        for(int col1=0; col1<space; col1++) {
            printf(" ");
        }
        int star=row>n-1? row*2+2-(2*n)+1:2*n-(2*row+1);
        for(int col2=0; col2<star; col2++) {
            printf("*");
        }
        printf("\n");
    }
}
//pattern 10
void hollowSquarePattern(int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            char pattern =row>0 && col>0 && col<n-1 && row<n-1 ?' ':'*' ;
            printf("%c", pattern);
        }
        printf("\n");
    }
}
//pattern 11

void hollowFullPyramid (int n){
    for(int row=0;row<n;row++){
    
        for(int col=0;col<n-row-1;col++){
            printf(" ");
        }
        for(int col2=0;col2<2*row+1;col2++){
            //printf("*");
            char pattern = col2>0 && col2 <2*row && row<n-1?' ':'*';
            printf("%c", pattern);
            
        }
        printf("\n");
    }
}
//pattern 12
void hollowInvertedFullPyramid (int n){
    for(int row=0;row<n;row++){
        for(int col1=0;col1<row;col1++){
            printf(" ");
        }
        for(int col2=0;col2<2*n-2*row-1;col2++){
          //  printf("*");
           
            char pattern =col2 ==0 || row==0 || col2 ==2*n-2*row-2  ?'*':' ';
            printf("%c", pattern);
            
        }
        printf("\n");
    }
}

//pattern 13
void hollowDiamond (int n){
    for(int row=0;row<2*n-1;row++){
        int space =row>n-1 ? row+1-n:n-row-1;
        for(int col1=0;col1<space;col1++){
            printf(" ");
        }
        int star=row>n-1 ? 2*n-(row-n)*2-3:2*row+1;
        for(int col2=0;col2<star;col2++){
            char pattern =col2==0 || col2==star-1 || col2 == 2*n-(row-n)*2-1?'*':' ';
            printf("%c", pattern);
        }
        printf("\n");
    }
}
//pattern 14
void hollowHourglass (int n){
    for(int row=0;row<2*n-1;row++){
        int space =row>n-1?2*n-row-2:row;
        for(int col1=0;col1<space;col1++){
            printf(" ");
        }
        int star =row>n-1? row*2+2-(2*n)+1:2*n-2*row-1;
        for(int col2=0;col2<star;col2++){
            //printf("*");
            char pattern =col2==0 || row==0 || row ==2*n-2 ||col2==star-1 ? '*' : ' ';
            printf("%c", pattern);
        }
        printf("\n");
    }
}
//pattern 15
void floydTriangle (int n){
    int count =1;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            printf("%d ", count++);
        }
        printf("\n");
    }
}
//pattern 16
void PascalsTriangle(int n){
    for(int row=1;row<=n;row++){
        for(int col1=0;col1<n-row;col1++){
            printf(" ");
        }
        int count =1;
        for(int col2=1;col2<=row;col2++){
            printf("%d ", count);
            count =count * (row-col2) / col2;
        }
        printf("\n");
    }
}

    
