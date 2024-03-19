#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define BUFSIZE 10000000
typedef long long ll;
#define WDSIZE 10000

int N,M;
int a[BUFSIZE];



int main(void){

  scanf("%d",&N);
  if(N%10 == 2 || N%10 == 4||N%10 ==5||N%10 ==7||N%10 == 9) printf("hon");
  if(N%10 == 0|| N%10 == 1 || N%10 ==6 || N%10 ==8) printf("pon");
  if(N%10 == 3) printf("bon");

}
