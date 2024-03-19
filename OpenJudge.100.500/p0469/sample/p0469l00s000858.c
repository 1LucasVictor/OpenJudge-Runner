int main(void){
  int k,n,m,i;
  
  scanf("%d",&k);
  scanf("%d %d",&n,&m);
  
  if(n % k == 0 || n % k + (m - n) >= k)
    printf("OK");
  else 
    printf("NG");
}
