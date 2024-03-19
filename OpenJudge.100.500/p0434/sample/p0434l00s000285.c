#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>


int L_in;


int main(int argc, char* argv[]){
    int i,j;
    scanf("%d",&L_in);
    if(L_in >=30){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}