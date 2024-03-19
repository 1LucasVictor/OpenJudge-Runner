int a, b, k, i;
int main(){
  scanf("%d%d%d", &a, &b, &k);
  i=a*b;
  while(k){
    if(a%i==0 && b%i==0) --k;
    --i;
  }
  printf("%d\n", i+1);
}
