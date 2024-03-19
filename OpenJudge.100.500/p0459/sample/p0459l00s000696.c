#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(2*x<=y && y<=4*x && y%2==0){
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}