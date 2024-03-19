#include <stdio.h>

int main(){
  int n;
  int a[20000];
  int k;
  
  scanf("%d", &n);
  for(k=2; k<=n; k++){
    scanf("%d", &a[k]);
  }
  
  int i, j, counter = 0;
  for(i=1; i<=n; i++){
    counter = 0;
    for(j=2; j<=n; j++){
      if(a[j] == i)
        counter++;
    }
    printf("%d\n", counter);
  }
}