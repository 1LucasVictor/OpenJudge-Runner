#include<stdio.h>
long power(long n,int m);
int main() {
  long n,m;
  int counter=0;
  scanf("%ld %ld",&n,&m);
  long pt[n][2];
  for (int i=0;i<n;i++) {
    scanf("%ld %ld",&pt[i][0],&pt[i][1]);
    if ( power(m,2) >= power(pt[i][0],2) + power(pt[i][1],2) )
      counter++;
  }
  printf("%d",counter);
  return 0;
}
 
long power (long n,int m) {
  for (int i=1;i<m;i++) 
    n*=n;
  return n;
}