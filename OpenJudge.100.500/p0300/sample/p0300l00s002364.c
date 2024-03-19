#include <stdio.h>
#define MAX 1000
int linerSearch(int*, int, int);
int n;

main()
{
  int s[MAX], t[MAX];
  int i, q, count=0;
  
  scanf("%d", &n);
  for(i=0; i<n; i++){
	scanf("%d", &s[i]);
  }

  scanf("%d", &q);
  for(i=0; i<q; i++){
	scanf("%d", &t[i]);
  }
  
  for(i=0; i<q; i++){
	if(linerSearch(s, n, t[i])) count++;
  }

  printf("%d\n", count);
  return 0;
}

int linerSearch(int *A, int n, int key)
{
  int i=0;
  A[n] = key;

  while(A[n] != key){
	i++;
	if(i==n) return 0;
	else return 1;
  }
}