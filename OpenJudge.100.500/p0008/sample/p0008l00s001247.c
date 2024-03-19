#include<stdio.h>
#include<math.h>

int main(){
  int n;
  int ans;
  while(scanf("%d",&n)!=EOF){
    ans=n-(n/2+n/6+n/30+n/210+n/2310+n/(13*2310));
    printf("%d\n",ans);
  }
  return 0;
}