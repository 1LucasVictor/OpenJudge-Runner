#include <stdio.h>
int linearsearch(int*, int);

int cnt = 0, n;

int main(){
  int i,j,q;
 
  scanf("%d", &n);
  int s[n];
  for(i = 0; i < n; i ++)
    scanf("%d", &s[i]);
 
  scanf("%d", &q);
  int t[q];
  for(i = 0; i < q; i ++)
    scanf("%d", &t[i]);

  for(i = 0; i < q; i++)
    cnt += linearsearch(s, t[i]);

  printf("%d\n", cnt);
  return 0;
}

int linearsearch(int *s, int key){
  int i = 0;
  s[n] = key;
  while(s[n] != key)
    i++;
  if(i == n)
    return 0;
  return 1;
}