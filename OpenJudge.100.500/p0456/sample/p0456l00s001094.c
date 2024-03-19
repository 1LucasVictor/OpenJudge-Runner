a,i;
char s[200200],t[200200];
main(){
  scanf("%s%s",s,t);
  while(s[i]){
    a+=s[i]!=t[i++];
  }
  printf("%d",a);
}