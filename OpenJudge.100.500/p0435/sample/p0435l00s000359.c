#include<stdio.h>
#include<math.h>

float calcDistance(int x,int y){
  float ret = sqrt(x * x + y * y);
  return ret;
}

int main(void){
  int cnt = 0;
  int x = 0,y = 0;
  int d = 0;
  int i = 0;
  int n = 0;
  float tmp = 0;
  scanf("%d %d",&n,&d);
  for(i = 0; i < n; i++){
    scanf("%d %d",&x,&y);
    tmp = calcDistance(x,y);
    if(tmp <= (float)d){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}
