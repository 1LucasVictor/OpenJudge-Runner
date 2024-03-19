#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=30){
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}