#include<stdio.h>
#include<stdlib.h>
#define N 100
#define M 99

typedef int data_n;
data_n n[N];
int num = 0,c = 0,cnt = 0;

int main()
{
  char s[N+M];
  scanf("%[^\n]*s", s);
  printf("%d\n",calculate(s));
}




// スタックから取り出す
int pop()
{
  if (num <= 0) return 0;
  return n[--num];
}
// スタックに積む
int push(int a)
{
  n[num++] = a;
}
// 逆ポーランド記法で計算
int calculate(char *s)
{
  int a, b, n;
  
  while (*s) {
    
    // 数値なら取り出してスタックに積む
    if (judge(s)) {
      n = get_number(s);
      cnt++;
      push(n);
      while (*s == '-' || *s == '+') {
	s++;
      }
      while (n) {
	n /= 10;
	s++;
      }
      if(cnt>=N){
	exit(0);
      }	
    }
    // 演算子なら2項を計算する
    else {
      switch (*s) {
      case '+':
	a = pop();
	b = pop();
	push(b+a);
	break;
      case '-':
	a = pop();
	b = pop();
	push(b-a);
	break;
      case '*':
	a = pop();
	b = pop();
	push(b*a);
	break;
      case '/':
	a = pop();
	b = pop();
	if (a == 0) break;
	push(b/a);
	break;
      case '%':
	a = pop();
	b = pop();
	if (a == 0) break;
	push(b%a);
      }
      s++;
      c++;
      if(c>=M)exit(0);
    }
  }
  return pop();
}
// 要素が数値かどうか判定
int judge(char *s)
{
  // 符号つき
  if (*s == '+' || *s =='-') {
    s++;
    if (*s >= '0' && *s <= '9') return 1;
    return 0;
  }
  // 符号なし
  if (*s >= '0' && *s <= '9') return 1;
  return 0;
}
// 文字列から数値を取り出す
int get_number(char *s)
{
  int sign = 0, n = 0;
  
  // 符号処理
  if (*s == '+') {
    s++;
  } else if (*s == '-') {
    sign = 1;
    s++;
  }
  // char型からint型に変更
	while (*s >= '0' && *s <= '9') {
	  n = n * 10 + (*s - '0');
	  s++;
	}
	// 符号を変えて返す
	if (sign) return -n;
	return n;
}