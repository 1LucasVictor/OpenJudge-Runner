int main(void){
  
  char s[2];
  int i;
  i=0;
  scanf("%s",&s);
  if(s[0]=='1')
    i++;
  if(s[1]=='1')
    i++;
  if(s[2]=='1')
    i++;
  printf("%d",i);
  return 0;
}


