int main(void){
  char a[4];
  int b=0;
  
  scanf("%s",a);
  
  if(a[0] == a[3] && a[1] == a[2]) b += 1;
  if(a[0] == a[2] && a[1] == a[3]) b += 1;
  if(a[0] == a[1] && a[2] == a[3]) b += 1;
  
  printf("%s",b==1? "Yes" : "No");
}