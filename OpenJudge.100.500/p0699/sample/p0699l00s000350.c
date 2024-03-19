#include<stdio.h>
int main(){

  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(17==a+b+c){
    if((a==5)&&(b==5)){
      puts("YES");
    }else if((a==5)&&(c==5)){
      puts("YES");
    }else if((b==5)&&(c==5)){
      puts("YES");
    }else {
      puts("NO");
    }
  }else{
    puts("NO");
  }


return 0;
}