#include<stdio.h>


int main(){
  int i;
  int j;
  scanf("%d",&i);
  // printf("%dツ嘉アツ禿シツ療債つオツづつュツつセツつウツつ「\n",i);
   for(j = 0 ; j < i; j++){
    int x,y,z;
    scanf("%d",&x);
    scanf(" %d",&y);
    scanf(" %d/n",&z);
    int X = x * x;
    int Y = y * y;
    int Z = z * z;
    // printf("%d %d %d\n",X,Y,Z);
    if(X == Y + Z){
      printf("YES\n");
    }
    if(Y == X + Z){
      printf("YES\n");
    }
    if(Z == X + Y){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
    // printf("%d %d %d\n",x,y,z);
   }
  return 0;
}