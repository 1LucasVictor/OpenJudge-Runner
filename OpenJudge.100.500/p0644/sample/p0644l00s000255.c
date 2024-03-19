int main(void){
  
  int a;
  int i;
  i=0;
  scanf("%d",&a);
  if(a%1==1)
    i++;
  if(a%10==1)
    i++;
  if(a%100==1)
    i++;
  printf("%d",i);
  return 0;
}


