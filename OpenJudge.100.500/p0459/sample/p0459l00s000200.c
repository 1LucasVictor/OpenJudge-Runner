#include <stdio.h>
#include <math.h>
int main(){
    int X, Y;
    double x, y;

    scanf("%d %d",&X,&Y);
    x=2*X-0.5*Y;
    y=-X+0.5*Y;

    if(x<0||y<0||ceil(x)!=floor(x)){
      printf("No");
    }else{
      printf("Yes");
    }

return 0;
}