#include <stdio.h>

int main () {
  int num,x,count=0,i,r;
  int hantei(int);

  scanf("%d",&num);

  for(i=0;i<num;i++) {
    scanf("%d",&x);
    r = hantei(x);
    if(r == 1)
      count++;
  }
  printf("%d\n",count);

  return 0;
}

int hantei(int x) {
  int j;
  if(x<2) return 0;
  else if(x==2) return 1;
  if(x%2==0) return 0;
  for(j=3;j*j <=x; j+=2){
    if(x%j==0) return 0;
  }
  return 1;
}

