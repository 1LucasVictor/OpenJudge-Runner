int main(void){
  int i,fla,k;
  int n[100];
  
  fla=0;
  
  scanf("%d", &k);
  
  for(i=0;i<k;i++){
    if(scanf("%d",&n[i])==1);
  }
  for(i=0;i<100;i++){
    if(n[i]%2 == 0){
      if(n[i]%3==0||n[i]%5==0)
        fla=0;
    else
      fla++;
    }
    }
    
  if(fla==0)
    printf("APPROVED\n");
  else 
    printf("DENIED\n");
  
  return 0;
}