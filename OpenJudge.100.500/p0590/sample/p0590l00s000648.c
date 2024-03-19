#include<stdio.h>

int distanceMeasurement(int x, int y);

int main( void ){
  int a,b,c,d,e,k;
  int distance[5];
  int i;
  int flag;
  const int true=1;
  const int false=0;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  scanf("%d", &k);

  flag = true;
  distance[0] = distanceMeasurement(a, b);
  distance[1] = distanceMeasurement(b, c);
  distance[2] = distanceMeasurement(c, d);
  distance[3] = distanceMeasurement(d, e);

  for(i=0;i<4;i++){
    if(distance[i]>k){
      flag = false;
    }
  }
  if(flag==false){
    printf(":(\n");
  }else{
    printf("Yay!\n");
  }
  return 0;
}

int distanceMeasurement(int x, int y){
  int r = 0;

  r = y - x;
  return r;
}