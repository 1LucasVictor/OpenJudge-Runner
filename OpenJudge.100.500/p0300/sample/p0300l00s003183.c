#include <stdio.h>
#define MAX 10000
#define max 500

int main(){

	int S[MAX],T[MAX],n,q,count,i,j;

	scanf("%d",&n);
	for( i = 0; i < n; i++) scanf("%d",&S[i]);
	scanf("%d",&q);
	for( i = 0; i < q; i++){
		scanf("%d",&T[i]);
		for( j = 0; j < n; j++){
			if(S[j] == T[i]) count++; 
		}
	}

	printf("%d\n",count);

	return 0;

}

/*
正解

#include <stdio.h>
#define N 100000
 
int main(void){
 
  int i,j,n,m,count=0;
  int s[N],t[N];
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
 
  scanf("%d",&m);
 
  for(j=0;j<m;j++){
    scanf("%d",&t[j]);
  }
 
  for(j=0;j<m;j++){
    for(i=0;i<n;i++){
      if(s[i] == t[j]){
    count++;
    break;
      }
    }
  }
  printf("%d\n",count);
  return 0;
}
*/
