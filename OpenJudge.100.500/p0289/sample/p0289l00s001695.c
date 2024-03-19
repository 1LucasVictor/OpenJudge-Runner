#include<stdio.h>
int main(){
    int x,y,z,tmp;
    int gcd;
    scanf("%d %d", &x,&y);
    if(x<y){
      tmp=x;
      x=y;
      y=tmp;
    }
    while((z = x % y) != 0)
    {
        x = y;
        y = z;
        z=x%y;
    }
    printf("%d\n",y);
    return 0;
}

