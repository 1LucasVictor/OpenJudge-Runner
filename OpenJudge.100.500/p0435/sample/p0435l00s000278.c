int main(void){
  int n;
  long d;
  scanf("%d%ld", &n, &d);
  d=d*d;
  int ans=0;
  for(int i=0; i<n; i++){
    long x, y;
    scanf("%ld%ld", &x, &y);
    ans+=(x*x+y*y<=d);
  }
  printf("%d\n", ans);
}