#include <stdio.h>
#include <math.h>
int main (){
  int N,D;
  scanf("%d %d",&N,&D);
  float T[N];
  for (int i=0;i<N;i++){
    int X,Y;
    scanf("%d %d",&X,&Y);
    T[i]=sqrt(X*X+Y*Y);
  }
  int s=0;
for (int i=0;i<N;i++){
  if (T[i]>=D)
    s++;
}
printf("%d",s);
return 0;
}
