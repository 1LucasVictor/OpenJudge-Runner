#include<stdio.h>
#include<stdlib.h>
int N;
void search(int n,int *a){
  int i,cnt=0;
  for(i=0; i<N;i++){
    if(n == a[i]){
      cnt++;
    }
    if(cnt == 2){
      printf("NO" );
      exit(0);
    }
  }
}

int main(void){
  int i;
  int a[200005];
  scanf("%d\n",&N );
  for(i=0; i<N; i++){
    scanf("%d\n",&a[i] );
  }
  for(i=0; i<N; i++){
    search(a[i],a);
  }
  printf("YES" );
  return 0;
}
