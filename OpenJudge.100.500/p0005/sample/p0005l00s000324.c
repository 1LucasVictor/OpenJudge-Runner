main(){
  char a[21];
  int i=0;
  scanf("%s",a);
  while(a[i]!='\0')
    i++;
  while(i>0)
    {
      i--;
      printf("%c",a[i]);
    }
  return 0;
}