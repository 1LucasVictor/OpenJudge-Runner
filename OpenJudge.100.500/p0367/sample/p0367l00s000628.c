#include<stdio.h>
int main(){

int a,b,c,yaku=0;

scanf("%d %d %d",&a,&b,&c);

for(int i = a ; i <= b ; i++){
      if(c%i == 0) yaku++;
}

printf("%d\n",yaku);

return 0;

}