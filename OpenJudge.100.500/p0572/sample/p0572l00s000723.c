#include <stdio.h>
int main(){
  int l, r, ans=99999;
  int lst[99999];
  scanf("%d",&l);
  scanf("%d",&r);
  for(int i=l;i<r;i++){
    for(int j=i+1;j<r+1;j++){
      if(ans>(i*j)%2019){
        ans = (i*j)%2019;
        //printf("%d\n",ans);
      }
    }
  }
  printf("%d\n",ans);

}
/*
l, r = map(int, input().split())
lst = []
for i in range(l,r):
  for j in range(i+1,r+1):
    lst.append(i*j%2019)
print(min(lst))
*/