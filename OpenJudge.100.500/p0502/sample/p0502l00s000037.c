#include <stdio.h>
 
int main(){
  int N;
  scanf("%d",&N);
  
  int a[N];
  for(int i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  
  int j=0;
  int evencnt=0;
  int cnt=0;
  while(j<N){
    if(a[j] % 2 == 0){
      evencnt++;
      if((a[j] % 3 == 0) || (a[j] % 5 == 0)){
        cnt++;
      }
    }
    j++;
  }
 
  if(evencnt++ == cnt) printf("APPROVED");
  else printf("DENIED");
}
 