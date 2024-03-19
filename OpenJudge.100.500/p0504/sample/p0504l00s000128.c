int main(void){
  int h, a;
  
  scanf("%d %d",&h,&a);
  
  printf("%d",h%a == 0 ? h/a : h/a+1);
}