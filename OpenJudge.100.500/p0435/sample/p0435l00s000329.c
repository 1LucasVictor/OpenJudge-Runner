#include<stdio.h>
#include<math.h>
int main(){
int N,i,a=0;
double ans,D,ans1;
double X[200001],Y[200001];
scanf("%d %lf",&N,&D);
for(i = 1; i <= N; i++){
scanf("%lf %lf",&X[i],&Y[i]);
}
for(i = 1; i<= N; i++){
ans1 = pow(X[i],2.0) + pow(Y[i],2.0);
ans = sqrt(ans1);
if(D >= ans){
  a++;
}
}
  printf("%d",a);
}