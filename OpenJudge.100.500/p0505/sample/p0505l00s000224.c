int main(){
  int h, a;
  int n, i;
  int sum=0;
  scanf("%d%d", &h, &n);
  for(i=0; i<n; i++){
    scanf("%d", &a);
    sum+=a;
  }
  puts(sum>=h?"Yes":"No");
}