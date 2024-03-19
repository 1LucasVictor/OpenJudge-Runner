#include<stdio.h>
int main(void){
  int i,c;
  int ans=0;

  for(int i=0;;i++){
    while((c=getchar())!=EOF){
      if(c=='\n')break;
      ans+=c-'0';
    }
    if(ans==0)break;
    printf("%d\n",ans);
    ans=0;
  }
  return 0;
}

