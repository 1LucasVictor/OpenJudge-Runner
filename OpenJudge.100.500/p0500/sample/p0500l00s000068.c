#include<stdio.h>

int main(){
  int n,m,i;
  int a,b;
  scanf("%d %d\n",&n,&m);
  int digit[n];
  for(i=0;i<=n;i++){
    digit[i]=0; 
    
  }
  //ok
  for(i=0;i<m;i++){
  scanf("%d %d\n",&a,&b);
  if(digit[a]!=0 && digit[a]!=b){
    printf("-1");
    return 0;
  }
  digit[a]=b;
  }
  //ok
  if(digit[1]==0){
    printf("-1");
    return 0;
  }
  
  for(i=1;i<=n;i++){
    printf("%d",digit[i]); 
  }

  return 0;
}