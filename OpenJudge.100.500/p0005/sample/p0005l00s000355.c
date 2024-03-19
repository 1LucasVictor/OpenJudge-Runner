int main(){
  char buff[100];
  int n;
  scanf("%s",buff);
  for(n = strlen(buff); n;) putchar(buff[--n]);
  return 0;
}