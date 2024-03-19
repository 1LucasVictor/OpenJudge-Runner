#include<stdio.h>
int power(int n,int m);
int main() {
  int n,m,counter=0;
  scanf("%d %d",&n,&m);
  int pt[n][2];
  for (int i=0;i<n;i++) {
    scanf("%d %d",&pt[i][0],&pt[i][1]);
    if (power(m,2) <= power(pt[i][0],2)+power(pt[i][1],2))
      counter++;
  }
  printf("%d",counter);
  return 0;
}
 
int power (int n,int m) {
  for (int i=1;i<m;i++) 
    n*=n;
  return n;
}
   