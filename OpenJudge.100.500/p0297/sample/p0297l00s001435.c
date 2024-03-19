#include<stdio.h>
char l[100001][11],*m[100000];
int t[100001],p[100001];

int main(void){
  int n, q, count = 0;
  scanf("%d %d", &n, &q);
  int i = 0,j = 0,k = 0;
  for(k=0;k<n;k++)
    scanf("%s %d", l[k], &t[k]);

  while(j != n){
    if (i==n)
      i = 0;
    
    if(t[i] == 0){
      i++;
      continue;
    } else {
      if (t[i] - q > 0){
	t[i] = t[i] - q;
	count += q;
      }
      else{
	count += t[i];
	t[i] = 0;
	m[j] = l[i];
	p[j++] = count;
      }

      i++;
    }
    // if (j == n) break;
  }
  for(i = 0; i < n; i++){
    printf("%s %d\n", m[i], p[i]);
  }
  return 0;
}
	
	