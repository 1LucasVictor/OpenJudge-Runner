#include <stdio.h>

int main(int argc, char*argv[]){

    int N,L,M;
    
    scanf("%3d",&N);

    L = N%100;
    M = N%10;

    if(M == 2|| M == 4|| M == 5|| M == 7|| M == 9){
        printf("hon");
        return 0;

    }else if(M == 0|| M == 1|| M == 6|| M == 8){
        printf("pon");
        return 0;

    }else{
        printf("bon");
        return 0;
    }

}