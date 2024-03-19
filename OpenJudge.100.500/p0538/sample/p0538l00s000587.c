#include<stdio.h>
int main()
{
    int b,c;
  int ans = 0;
    // スペース区切りの整数の入力
    scanf("%d %d",&b,&c);
    if(b >= 1 && b<= 9){
      if(c >= 1 && c<=9){
        ans = b*c;
		printf("%d",ans);
        return 0;
      }
    }
  
    printf("-1");//printf("%c",s[0])//文字一つ分のみを出力
    
    return 0;
}
