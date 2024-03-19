#include<stdio.h>

void main(){
    int code;
    int a[4];
    int h = 0;
    scanf("%d",&code);
    if(code < 10000){
        a[0] = (code % 10); 
        code = (code - (code % 10)) / 10;
        a[1] = (code % 10); 
        code = (code - (code % 10)) / 10;
        a[2] = (code % 10); 
        code = (code - (code % 10)) / 10;
        a[3] = (code % 10); 
        if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3]){
            h++;
        }
    }

    if(h == 0){
        printf("Good \n");
    }else{
        printf("Bad \n");
    } 
    return;
}