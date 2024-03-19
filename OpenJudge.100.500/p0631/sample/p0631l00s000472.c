char *s[]={"NO","YES"};
int a, b, x;
char f;
int main(){
  scanf("%d%d%d\n", &a, &b, &x);
  f = (x>=a && x<=a+b);
  puts(s[f]);
}
