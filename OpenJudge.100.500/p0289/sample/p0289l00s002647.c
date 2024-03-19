#include <stdio.h>

int grd(int a,int b){
    int tmp,r;
    if(a<b){
        tmp = b;
        b = a;
        a = tmp;
    }
    while(b>0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
  int a,b,c;
  scanf("%d %d",&a,&b);
  c = grd(a,b);
  printf("%d\n",c );
  return 0;

}

