int main(void){
  int n,b,a[20000] = {0};
  int i;
  
  scanf("%d",&n);
  for(i = 0; i < n-1; i++){
    scanf("%d",&b);
    a[b-1] ++;
  }
  
  for(i = 0; i < n; i++){
   	printf("%d\n",a[i]);
  }
  
}
  
  
  
  