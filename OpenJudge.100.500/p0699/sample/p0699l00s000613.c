#include<stdio.h>
int main(void){
  int a[3];
  int five = 0,seven = 0;
  scanf("%d%d%d",a,a+1,a+2);
    for(int cnt = 0;cnt < 3;cnt++){
      if(a[cnt] == 5) five += 1;
      else if(a[cnt] == 7) seven += 1;
    }
    if(five == 2 && seven == 1) printf("YES");
    else printf("NO");
  return 0;
}
