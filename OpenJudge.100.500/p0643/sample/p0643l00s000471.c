int main(){
  
  int a,b,c;
  
  do{
    scanf("%d %d",&a,&b);
  }while(a<1||b>10000);

  c = a*b;

  if(c%2==0)
    printf("Even");
  else
    printf("odd");
  
  return 0;

}
