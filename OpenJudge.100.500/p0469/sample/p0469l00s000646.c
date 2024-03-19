int main(void){
  int K, A, B, c = 0;
  scanf("%d", &K);
  scanf("%d", &A);
  scanf("%d", &B);

  for(int i = A; i <= B; i++){
    if(i % K == 0) c += 1;
  }

  if(c == 0) printf("NG\n");
  else printf("OK\n");


  return 0;
}