#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define FOR(n) for(int i=0;i<n;i++)
#define PRN(n) printf("%d\n",n)
#define PRS(s) printf("%s\n",s)
#define PRC(c) printf("%c\n",c)
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  PRN((a>=b)*10);
  return 0;
}