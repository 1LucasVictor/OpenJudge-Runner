#include <stdio.h>
 
int main(){
  int N, num[200001];
  
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &num[i]);
    for(int j=0; j<i; j++){
      if(num[j]==num[i]){
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}