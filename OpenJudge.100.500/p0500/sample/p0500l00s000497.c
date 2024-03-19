#include<stdio.h>

int main(void) {
  int n;
  int m;
  scanf("%d %d", &n, &m);
  int s[m];
  int c[m];
  int result[n];
  for (int j = 0; j < n; j++) {
    result[j] = 0;
  }
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &s[i], &c[i]);
  }
  int tmp[m];
  for (int i = 0; i < m; i++) {
    tmp[i] = s[i];
  }
  
  for (int i = 1; i < m; i++) {
    for (int j = 0; j < m; j++) {
      if (tmp[i] == s[j] && c[i] != c[j]) {
        printf("-1");
      	return 0;
      }
    }
    result[s[i]-1] = c[i];
  }
  if (result[0] == 0) {
  	printf("-1");
    return 0;
  }
  
  for (int j = 0; j < n; j++) {
    printf("%d",result[j]);
  }
  
  return 0;
}


