#include<stdio.h>
#include<math.h>
int main (void){
    long int x;
    long int y;
    int cnt = 0;
    long int n,d;
    scanf("%ld %ld",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%ld %ld",&x,&y);
        if(x*x+y*y<=d*d)cnt ++;
    }
    printf("%d",cnt);
    return 0;
}