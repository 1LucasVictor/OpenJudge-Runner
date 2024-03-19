#include <stdio.h>
#include <math.h>
int m[200000][2];
int count(int n,int d){
  int ct=0;
  for(int i=0;i<n;i++){
    double x=pow(m[i][0],2.0)+pow(m[i][1],2.0);
    if(sqrt(x)<=d){
      ct++;
    }
  }
  return ct;
}

int main(){
  int n,d;
  scanf("%d %d",&n,&d);
  for(int i=0;i<n;i++){
    scanf("%d %d",&m[i][0],&m[i][1]);
  }
  printf("%d",count(n,d));
  return 0;
}