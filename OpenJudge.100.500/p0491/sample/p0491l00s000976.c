int main(void){
  int n,k,i;
  
  scanf("%d %d",&n,&k);
  
  if(n <= k){
    printf("%d",n);
    return 0;
  }
    
  if(n%k < (n%k-k) * -1)
    printf("%d",n%k);
  else
    printf("%d",(n%k-k) * -1);
}