#include <stdio.h>

int main(){
  int v[5],k;
  int test = 0;
  for(int i=0; i<5; i++)
    scanf("%d", &v[i]);
  scanf("%d", &k);
  for(int i=0; i<5; i++){
    for(int j=i+1; j<5; j++){
      if(v[j]-v[i] > k)
        test++;
    }
  }
  if(test == 0)
    printf("Yay!\n");
  else
    printf(":(\n");
  return 0;
}
