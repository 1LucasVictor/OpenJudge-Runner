#include<stdio.h>
#include<math.h>
int main(){
  int N,D;
  scanf("%d %d",&N,&D);
  int i;
  int j=0;
  int X,Y;
  for(i=0;i<N;i++){
    scanf("%d %d",&X,&Y);
    if(pow(X,2)+pow(Y,2)<=pow(D,2)){
      j++;
    }
  }
  printf("%d\n",j);
}