#include<stdio.h>
void BubbleSort(int array[],int N) //バブルソート(小さい順) O(N^2)
{
    int i, j, temp;
    for (i = 0;i < N - 1;i++) {
        for (j = 0;j < N - 1;j++) {
            if (array[j + 1] < array[j]) {
                temp = array[j];array[j] = array[j + 1];array[j + 1] = temp;
            }
        }
    }
}
int main()
{
  int N,A[200010];
  int flag=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  BubbleSort(A,N);
  for(int i=1;i<N;i++){
    if(A[i-1]==A[i]){
      flag = 1;
      break;
    }
  }
  if(flag==0){
    printf("YES");
  }else{
    printf("NO");
  }
}