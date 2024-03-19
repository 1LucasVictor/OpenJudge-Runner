#include<stdio.h>
int main(){
	int a,b;
  scanf("%d %d",&a,&b);
  if(1<=a<=9 && 1<=b<=9){
    printf("%d\n",a*b);
  }
  else if (10<=a<=20 || 10<=b<=20){
    printf("-1\n");
  }
    return 0;
}
