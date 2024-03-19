#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int i;
  int a[N];
  int count[100000]={0};
  for(i=1;i<N;i++){
    scanf("%d",&a[i]);
    count[a[i]]++;
  }
  for(i=1;i<=N;i++){
    printf("%d\n",count[i]);
  }
}

