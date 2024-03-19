char *s[]={":(","Yay!"};
int a, b;
char f;
int main(){
  scanf("%d%d", &a, &b);
  f = a<=8 && b<=8;
  puts(s[f]);
}