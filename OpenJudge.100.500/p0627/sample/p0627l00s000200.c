#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 

int main()
{
  //int A, B, C, X, Y;
//  int m[101]={};
  int A, B, C, D;
  //int ans=1;
  char comp[6]={};
//  int sosu[20000]={};
  char s[5001]={};
  int len;
  int ans[2]={};
  int i,j,k;
  int flag=0;  
//    int k=0;

  
  scanf("%d %d", &A, &B);
  ans[0]=A+B;
  ans[1]=A-B;
  ans[2]=A*B;

  if(ans[0]<ans[1]) ans[0]=ans[1];
  if(ans[0]<ans[2]) ans[0]=ans[2];
  
  
  printf("%d\n", ans[0]);
  
return 0;
}
