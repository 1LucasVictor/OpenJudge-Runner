#include <stdio.h>
int main(){
  int a,b=0,c=0;
  for(int i=0;i<3;i++){
    scanf("%d",&a);
    switch(a){
      case 5:
        b++;
        break;
      case 7:
        c++;
        break;
      default:
        puts("NO");
        return 0;
        break;
    }
    if(b==2&&c==1)puts("YES");
  }
  return 0;
}