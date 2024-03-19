int main()
{
  
  char s[101];
  char t[101];
  
  int i;
  i = 0;
  
  int n;
  n = 0; 
  
  scanf("%s%s",s,t);
 
  
  while(s[i] != '\0')
  {
    if (s[i] != t[i])
    {
      n++;
    }
    i++;
  }
    printf("%d", n);
    return 0;
}