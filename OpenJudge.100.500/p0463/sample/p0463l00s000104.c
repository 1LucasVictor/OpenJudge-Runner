#include<stdio.h>
int main()
{
    /*
    int a,b,c;
    char s[101];
    // 整数の入力
    scanf("%d", &a);
    // スペース区切りの整数の入力
    scanf("%d %d",&b,&c);
    // 文字列の入力
    scanf("%s",s);
    // 出力
    printf("%d %s\n",a+b+c,s);
    for(int i=0;i<10;i++){
        printf("hello");
    }
    */
   int s,w;
   scanf("%d",&s);
   if(s%10==2||s%10==4||s%10==5||s%10==7||s%10==9){
       printf("hon");
       return 0;
   }
   if(s%10==0||s%10==1||s%10==6||s%10==8){
       printf("pon");
       return 0;
   }
   if(s%10==3){
       printf("bon");
       return 0;
   }
}