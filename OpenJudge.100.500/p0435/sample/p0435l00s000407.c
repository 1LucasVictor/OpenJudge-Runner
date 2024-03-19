#include<stdio.h>
#include<math.h>
int main (void){
    int x;
    int y;
    int cnt = 0;
    int n,d;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x*x+y*y<=d*d)cnt ++;
    }
    printf("%d",cnt);
    return 0;
}