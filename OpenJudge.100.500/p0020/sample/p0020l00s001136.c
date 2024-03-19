#include <stdio.h>
int main(){
  int n,i;
  double p[4][2];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf
      (
       "%lf %lf %lf %lf %lf %lf %lf %lf",
       &p[0][0],&p[0][1],&p[1][0],&p[1][1],&p[2][0],&p[2][1],&p[3][0],&p[3][1]
       );
    if((p[1][1]-p[0][1])/(p[1][0]-p[0][0])-(p[3][1]-p[2][1])/(p[3][0]-p[2][0])==0)
      printf("YES\n");
    else 
      printf("NO\n");
  }
  return 0;
}