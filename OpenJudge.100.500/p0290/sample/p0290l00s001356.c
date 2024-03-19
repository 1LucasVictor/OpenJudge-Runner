#include<stdio.h>

int main(){
  int i, j, n, bool=1, cnt=0;
  int a[10000];

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }

  for(i=0; i<n; i++){
    for(j=2; j<a[i]; j++){
      if(a[i]%j == 0) {
	bool = 0;
	break;
      }
    }
    if(bool == 1) cnt ++;
    bool = 1;
  }

  printf("%d\n", cnt);
}

