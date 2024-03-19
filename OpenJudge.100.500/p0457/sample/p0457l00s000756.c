int main(){
  
 int N,M;
 long int K;
 int A[200015],B[200015];
  
  scanf("%d",&N);
  scanf("%d",&M);
  scanf("%ld",&K);
  
  
  for(int i=0;i<N;i++)scanf("%d",&A[i]);
  for(int i=0;i<M;i++)scanf("%d",&B[i]);
  A[N]=1000000005;
  B[M]=1000000005;
  
  int cnt=0,Apos=0,Bpos=0;
  long long int Rsum=0;
  
  for(int i=0;i<N+M;i++){
    if(A[Apos] < B[Bpos]){
      Rsum+=A[Apos]; 
      Apos++;
    }else{
      Rsum+=B[Bpos];
      Bpos++;
    }
    
    if(Rsum>K)break;
    
    cnt++;
  }
  
  printf("%d",cnt);
 return 0;
}