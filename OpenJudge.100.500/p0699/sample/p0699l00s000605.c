#include<stdio.h>
int main()
{
    int a,b,c;
    // 整数の入力
    scanf("%d", &a);
    scanf("%d",&b);
  	scanf("%d",&c);
    if(a==7||b==7||c==7)
      if((a==5&&b==5)||(b==5&&c==5)||(c==5&&a==5)){
        printf("YES");
      }
  	else printf("NO");
    return 0;
}