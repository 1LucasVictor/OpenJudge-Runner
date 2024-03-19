#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int n;
    int d;
    int x,y;
    int a;
    int s = 0;

    scanf("%d %d",&n,&d);
    for(int i=1; i<=n; i++){
        scanf("%d %d" ,&x,&y);
        if(abs(x)<=d && abs(y)<=d){
            a = x*x + y*y;
            //sqrt(abs(x)*abs(x) + abs(y)*abs(y));
            if(a <= d*d){
            s += 1;
            }
        }
    }

    printf("%d",s);

    return 0;
}