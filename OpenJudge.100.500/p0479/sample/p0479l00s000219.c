#include<stdio.h>
int main(){
  int N;
  int s;
  scanf("%d",&N);
  int arr[20010],arr1[20010];
  for(int i=0;i<(N-1);i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<(N-1);i++){
    s=arr[i];
    arr1[s-1]=arr1[s-1]+1;
  }
for(int i=0; i<N;i++){
  printf("%d\n",arr1[i]);
}
}