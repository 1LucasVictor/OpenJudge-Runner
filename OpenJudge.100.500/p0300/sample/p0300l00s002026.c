
#include <stdio.h>
#define N 1000
#define Q 500
int linearSearch(int*, int*);
int n,q;
int main()
{
  int s[N],t[Q];
  int i;
  int c=0,cnt=0;

  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&s[i]);
  }
  
  scanf("%d",&q);
  for(i=0; i<q; i++){
    scanf("%d",&t[i]);
  }
    
  cnt = linearSearch(s,t);

  printf("%d\n",cnt);

  return 0;

}

int linearSearch(int *x,int *y)
{
  int i,j;
  int cnt=0;
  
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      if(x[i]==y[j]){
	cnt++;
	break;
      }
    }
  }
  
  return cnt;
}