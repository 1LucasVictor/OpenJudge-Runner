int a, b, t, max;
int main(){
  scanf("%d%d", &a, &b);
  max=a+b;
  t=a-b;
  if(t>max) max=t;
  t=a*b;
  if(t>max) max=t;
  printf("%d\n", max);
}

