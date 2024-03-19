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
int cmp(const void* a,const void* b){return *(int*)a-*(int*)b;}

int main() {
  int i,ans=0;
  char S[4];
  scanf("%s",S);
  FOR(i,0,3)if(S[i]==S[i+1])ans=1;
  if(ans==1)printf("Bad");
  else printf("Good");

  //printf("%d\n",ans);
	return 0;
}
