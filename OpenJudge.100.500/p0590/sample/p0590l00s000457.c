#include <stdio.h>

int
main(int argc, char *argv[])
{
  int a[5], k;
  for(int i = 0; i < 5; i++){
    scanf("%d", &a[i]);
  }
  scanf("%d", &k);
  int l = 0;
  
  for(int i = 0; i < 4; i++){
    for(int j = i+1; j < 5; j++){
      if(a[j] - a[i] > k){
        l += 1;
      }
    }
  }
  
  if(l > 0){
    printf("%s\n", ":(");
  }
  else{
    printf("%s\n", "Yay!");
  }
  return 0;
}