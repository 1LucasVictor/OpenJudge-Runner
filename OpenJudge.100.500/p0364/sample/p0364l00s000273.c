#include<stdio.h>
int main (void){


int W;
int H;
int x;
int y;
int r;

scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

if(x<0) printf("No\n");
else if(y<0) printf("No\n");
else if(W-(x+r)>=0) printf("Yes\n");
else if(H-(y+r)>=0) printf("Yes\n");


return 0;
}