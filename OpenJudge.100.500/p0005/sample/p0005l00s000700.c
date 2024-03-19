i;
main(){
  char a[30];
  scanf("%s",a);
  while(a[i]!='\0')
    i++;
  while(i>0)
    {
      i--;
      printf("%c",a[i]);
    }
  puts("");
  exit(0);
}