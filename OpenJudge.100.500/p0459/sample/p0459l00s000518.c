#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define ull unsigned long long

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if ((y-2*x)<0||(4*x-y)<0) {
        printf("No");
        return 0;
    }
    if ((y-2*x)%2==0&&(4*x-y)%2==0) {
        printf("Yes");
    }else printf("No");
    return 0;
}
