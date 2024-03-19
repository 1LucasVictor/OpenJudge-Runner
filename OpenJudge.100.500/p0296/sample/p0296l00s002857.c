#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int tmp,top,x,max;
int S[100];
char s[100];

void initialize()
{
  top=0;//スタックを空にする
}
int isEmpty()
{
  return top==0;
}
int isFull()
{
  max=strlen(s);
  return top>=max-1;
}
void push()
{
  /* if (isFull())
    puts("err");
  */
  top++;
  S[top] = x;
}
int pop()
{
  /* if(isEmpty())
     puts("err");
*/
  top--;
  return S[top+1];
}
void test()
{
 int i=0;
 while( scanf("%s", s) != EOF ){
   if(s[0]=='+')
     puts("+");
   else
     printf("%s",s);
 }
}
int main()
{
  initialize();
  while( scanf("%s", s) != EOF ){//文字の終わりまで
    if ( s[0] == '+' ){//文字列のs[0]は+がきたとき全てに通用する
      tmp=pop();
      S[top]=tmp+S[top];
//      printf("sum=%dtop=%d\n",S[top],top);
	    
    } else if ( s[0] == '-' ){
      tmp=pop();
      S[top] =S[top]-tmp;
     // printf("sum=%dtop=%d\n",S[top],top);

      
    } else if ( s[0] == '*' ){
      tmp=pop();
      S[top]=tmp*S[top];//例の通りならここでsum[1]に入っていたsum[1]と[2をかける
  //    printf("sum=%dtop=%d\n",S[top],top);
      
    } else {
      x = atoi(s);
      push();
    }

  }
printf("%d\n",S[top]);
  return 0;
}
