#include <stdio.h>
int main(){
int n,ans=2;
  scanf("%d",&n);
  int x[n];
  for(int i=0;i<n;i++){
    scanf("%d",&x[i]);
    if(x[i]%2==0){
      ans=0;
      if(x[i]%3==0||x[i]%5==0)
        ans=1;
    }
  }
  if(ans>0) printf("APPROVED");
  else printf("DENIED");


}
