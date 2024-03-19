#include <stdio.h>
 
int main(){
  char c[1101];
  int i=0,ans=0,b=1;
  do{
    for(i=0; i<1100; i++){
      scanf("%c",&c[i]);
      if(i==0&&c[0]=='0'){
        b=0;
        break;
      }
      if(c[i]=='\n')break;
      ans+=(c[i]-'0');
    }
    if(b)printf("%d\n",ans);
    ans=0;
  }while(b);
  return 0;
}
