#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int  a, b, c, d, X, Y;
  //  double  c;
  int  A[100003]={};
  int  B[100003]={};
  int  C[100003]={};

  int  flag[103]={};

//  long long  a, b, c, d, X, Y;
//char s[101][101]={};
//  int N, M;
//  int A[1000000001]={};
//  long long  C[101]={};
  int i,j,k;
//  int flag=0;
  int tmp=0;
  int min=1000;
  int len=0;
  int cnt=0;
  int num=0;
  double ans=1000;
  int max=0;
//  char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  //  a=0;
//  scanf("%lld %lld", &a, &b);
  scanf("%d%d", &a, &b);
//  cnt = strlen(t);
  //printf("%d\n",cnt);
  if((b%a)==0)  printf("%d\n",a+b);
  else  printf("%d\n",b-a);

  
  //  //  if(flag==0)   printf("TLE\n");
//    if(max < cnt - max)  printf("Yes\n");
//    else  printf("No\n");
  
return 0;
}
