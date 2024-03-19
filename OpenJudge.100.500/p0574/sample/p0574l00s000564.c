#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int compare_int(const void *a, const void *b)
{
//    return *(int*)a - *(int*)b;
    return *(long long*)a - *(long long*)b;
}
//  qsort(A, b, sizeof(int), compare_int);

long long  factorial(long long n) {
    if (n > 0) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main()
{
//  int a ,b, c, d, e, X, Y;
  long long  a, b, c, d, e, X, Y;
  //  double  c;
//  int  A[200003]={};
  long long  A[100003]={};
//  long long  B[100003]={};
  int  C[100003][11]={};

  int  flag[1003]={};

//  long long  a, b, c, d, X, Y;
  char s[101][101]={};
  char t[101]={};
//  int N, M;
//  int A[1000000001]={};
//  long long  C[101]={};
  int i,j,k;
  long long p,q;
//  int flag=0;
//  int tmp=0;
  char tmp[101]={};
  long long min=10000000000;
//  long long min=100000001;
  int len=0;
  int l=0;
  int r=1000001;
  int cnt=1;
  int num=1;
  int num1=0;
  int num2=0;
  long long ans=1;
  int max=0;
  int addr=0;
  int ptn=0;
//  bool on_off[100]={};
  
//  char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  //  a=0;
//  scanf("%lld %lld", &a, &b);
//  scanf("%d%d", &a,&c);
//  cnt = strlen(t);
// printf("%d\n",a);
  for(i=0;i<4;i++){
    scanf("%c", &t[i]);
    if(t[i-1]==t[i]){
      printf("Bad\n");
      return 0;
    }
  }
    
  printf("Good\n");
  

    
//    printf("%s %d %d\n", s[i],C[i][0],C[i][1]);
   // printf("%d\n", C[i][1]);
/*  for(i=0;i<addr;i++){
//  scanf("%lld%lld", &B[0][i],&B[1][i]);
//    ans=ans+A[i];
    printf("%lld ", A[i]);
  }
*/
//    printf("%d ", cnt);
   
//  ans=a*3;
//  ans=(ans+b)/2;
//  printf("%d\n", ans);

  
//  printf("%lf\n",ans);
  //  //  if(flag==0)   printf("TLE\n");
//    if(max < cnt - max)  printf("Yes\n");
//    else  printf("No\n");
  
return 0;
}
