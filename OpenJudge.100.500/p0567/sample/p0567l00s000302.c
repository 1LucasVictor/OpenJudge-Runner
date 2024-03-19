#include<stdio.h>
#include<math.h>
#include<string.h>

#define FOR(n) for(int i=0;i<n;i++)
#define PRN(n) printf("%d\n",n)
#define PRS(s) printf("%s\n",s)

int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  PRN(b+c-a);
  return 0;
}