#include <stdio.h>
int main(){
  int m=0,n,cnt=0,i=0,j;
  scanf("%d",&n);
    j=n;
   while(n!=0){
    n = n / 10;
    ++cnt;
  }
    while(cnt>0){
      m=j/10;
      i=m*10;
      if(j-i==7){
        printf("Yes\n");
        return 0;
      }
        cnt--;
        j=m;
    }

        printf("No\n");
}
