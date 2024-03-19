int main (void){
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++){
  scanf("%d",&A[i]);
  }

  for(int j=0;j<N;j++){
    if(A[j]%2==0){
      if(A[j]%3==0||A[j]%5==0){
      }else{
        printf("DENIED\n");
        return 0;
      }
    }
  }
  printf("APPROVED\n");
  return 0;
}
