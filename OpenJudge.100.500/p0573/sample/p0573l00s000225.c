#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define LL long long
#define INF 1<<31-1
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define FOR(i,a,n) for(i=a;i<n;i++)
#define MOD 1000000007
#define NUM 100005
void swap(int* a,int* b){int tmp=*a;*a=*b;*b=tmp;}
int GCD(int a,int b){int c=1,tmp=MAX(a,b);b=MIN(a,b);a=tmp;while(c!=0){c=a%b;a=b;b=c;}return a;}
int LCM(int a,int b){return a*b/GCD(a,b);}
int POW(int a,int n){int i;LL x=a;if(n==0)return 1;else if(n==1)return a;else FOR(i,0,n-1){x=x*a;if(x>MOD)x%=MOD;}return (int)x;}
//int cmp(const void* a,const void* b){return *(int*)a-*(int*)b;}

int main() {
  int i,ans=0;
  char S[5];
  scanf("%s",S);
  if(S[0]==S[1]&&S[2]==S[3])ans=1;
  if(S[0]==S[2]&&S[1]==S[3])ans=1;
  if(S[0]==S[3]&&S[1]==S[2])ans=1;
  if(ans==1)printf("Yes");
  else printf("No");

  //printf("%d\n",ans);
	return 0;
}
