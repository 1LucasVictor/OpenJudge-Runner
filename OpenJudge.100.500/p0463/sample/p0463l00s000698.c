#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int r;
    r = N % 10;
    if(r==3){
        puts("bon");
    }else if(r==0 || r==1 || r==6 || r==8){
        puts("pon");
    }else{
        puts("hon");
    }
    return 0;
}