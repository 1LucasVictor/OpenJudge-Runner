int main(void){
  char s[4];
  int i;
  
  scanf("%s",s);
  
  for(i=0; i<3; i++)
    if(s[i] == s[i+1]){
      printf("Bad");
      return 0;
    }
  
  printf("Good");
}