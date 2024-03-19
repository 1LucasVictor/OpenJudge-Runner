#include<stdio.h>
/*
void plus(int *, int);
void minus(int *, int);
void kake(int *, int);
*/
int main(){
  int i, j, tmp, flug=1, cnt=1;
  char check;
  int a[100]={0};

  while(1){
    if((check = getchar()) == '\n') break;
    if(check == ' ')continue;
    if(cnt < 3) {
      a[cnt] = check - '0';
      cnt ++;
    }
    else if(cnt >= 3){
      switch(check){
      case '+':
	a[cnt-2] = a[cnt-2] + a[cnt-1];
	a[cnt-1] = 0;
	cnt--;
	break;
      case '-':
	a[cnt-2] = a[cnt-2] - a[cnt-1];
	a[cnt-1] = 0;
	cnt--;
	break;
      case '*':
	a[cnt-2] = a[cnt-2] * a[cnt-1];
	a[cnt-1] = 0;
	cnt--;
	break;
      default:
	a[cnt] = check - '0';
	cnt++;
	break;
      }
    }
  }

  printf("%d\n", a[cnt-1]);
  return 0;
}
/*
void plus(int *a, int cnt){
  a[cnt-1] = a[cnt-1]+a[cnt];
  a[cnt] = 0;
  cnt--;
}


void minus(int *a, int cnt){
  a[cnt-1] = a[cnt-1]-a[cnt];
  a[cnt] = 0;
  cnt--;
}


void kake(int *a, int cnt){
  a[cnt-1] = a[cnt-1]*a[cnt];
  a[cnt] = 0;
  cnt--;
}
*/

