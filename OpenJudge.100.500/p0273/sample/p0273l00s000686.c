int fibonacci(int *, int);

int main(){
  int f[45];
  int n, i;

  scanf("%d", &n);
  for(i = 0; i < 44; i++) f[i] = 0;
  printf("%d\n",fibonacci(f, n));

  return 0;
}

int fibonacci(int *f, int n){
  
  if(n == 0 || n == 1){
    return f[n] = 1;
  }
  else if(f[n] != 0) return f[n];
  else return f[n] = fibonacci(f, n - 2) + fibonacci(f, n - 1);
}