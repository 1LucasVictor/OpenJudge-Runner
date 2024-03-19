#include<stdio.h>
#include<math.h>


void swap(int *,int *);

int main(){
  int x,y,r;

  while(1){
  scanf("%d %d",&x,&y);

  if(x>=1&&x<=pow(10,9)&&y>=1&&y<=pow(10,9)) break;
  }
  if(x<y) swap(&x,&y);

  while(y>0){
    r = x%y;
    x = y;
    y = r;

  }
  printf("%d\n",x);

  return 0;
}


void swap(int *x,int *y){
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;


}


