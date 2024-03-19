int main(void){
  int a,b=0;
  
  scanf("%d",&a);
  
  while(500<=a){
    a -= 500;
    b += 1000;
  }
  
  while(5<=a){
    a -= 5;
    b += 5;
  }
  
  printf("%d",b);
}
    