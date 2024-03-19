int main(){
  int n, a;
  char f=0;
  scanf("%d", &n);
  for(a=1; a<=9; a++){
    if(n/a*a==n) f=1;
  }
  puts(f?"Yes":"No");
}