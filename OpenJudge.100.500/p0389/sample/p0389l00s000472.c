#include<stdio.h>
#include<string.h>

#define N 200

int main(){
  char ans[N], str[N];
  int n, h, i, j, len;

  while(scanf("%s", ans), ans[0]!='-'){
    scanf("%d", &n);
    for(i=0; i<n; i++){
      scanf("%d", &h);
      len=strlen(ans);
      for(j=0; j<len-h; j++){
	str[j]=ans[h+j];
      }
      for(j=0; j<h; j++){
	str[j+(len-h)]=ans[j];
      }
      for(j=0; j<len; j++){
	ans[j]=str[j];
      }
    }

    printf("%s\n", ans);
    
  }

  return 0;
}