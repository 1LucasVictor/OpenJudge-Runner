#include <stdio.h>

int drawCount(int x,int y);

int main() {
  int X,Y,count=0;
  scanf("%d %d",&X,&Y);
  if(Y%4==0 || Y%2==0) {
    count = drawCount(X,Y);
  }
  if(X==count) {
    printf("Yes");
  }else {
    printf("No");
  }
  return 0;
}

int drawCount(int x,int y) {
  int count = 0;
  int cnt4 = 0;
  while(y!=0) {
    if(y>=4) {
      y=y-4;
      count++;
      cnt4++;
    }else if(y==2) {
      y=y-2;
      count++;
    }
  }
  if(count!=x) {
    for(int i=0;i<cnt4;i++) {
      count++;
      if(count==x) {
        break;
      }
    }
  }
  return count;
}
  