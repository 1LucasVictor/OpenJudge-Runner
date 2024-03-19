#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int n,d;
    scanf("%d%d", &n, &d);

    int count = 0;

    for(int i=0; i<n; i++){
        int x,y;
        scanf("%d%d", &x, &y);
        if((long)x*x+(long)y*y<=(long)d*d)count++;
    }

    printf("%d", count);

    return 0;
}