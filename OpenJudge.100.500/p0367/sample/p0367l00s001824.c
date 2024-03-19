#include <stdio.h>

int a,b,c;
int d=0;
//int w,h,x,y,r;

int main(void) {
  scanf("%d %d %d",&a,&b,&c);
  for(int k=a;k<=b;k++){
    if(c%k==0){
      d++;
    }
    else;
    //printf("%d %d\n",num[1][k],num[2][k]);
  }
  printf("%d\n",d);
}

