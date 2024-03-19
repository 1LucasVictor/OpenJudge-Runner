#include<stdio.h>

int main(){
  char a[4]; scanf("%s",a);
  if(a[0]==a[1]){
    if(a[2]==a[3] && a[0]!=a[2]) printf("Yes\n");
    else printf("No\n");
  }else if(a[0]==a[2]){
    if(a[1]==a[3] && a[1]!=a[2]) printf("Yes\n");
    else printf("No\n");
  }else if(a[0]==a[3]){
    if(a[2]==a[1] && a[0]!=a[2]) printf("Yes\n");
    else printf("No\n");
  }
    
  
  /*int n,a,b; scanf("%d%d%d",&n,&a,&b);
  if(n*a<b) printf("%d\n",n*a);
  else printf("%d\n",b);*/
  return 0;
}