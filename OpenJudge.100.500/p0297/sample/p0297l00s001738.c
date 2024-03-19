 #include <stdio.h>
#include <string.h>
#define N 100005

typedef struct pp{
  char name[100];
  int l;
}P;

P A[N+1];
int max,mini,n;

void en(P);
P de(void);
int mi(int,int);

int main()
{
    int flag=0, c;
  int i,k;
  P r;
  scanf("%d %d", &n, &k);

  for ( i = 1; i <= n; i++){
    scanf("%s", A[i].name);
    scanf("%d", &A[i].l);
  }
max=1;
mini=n+1;

while(max!=mini)
{
r=de();
c=mi(k,r.l);
  r.l-=c;
flag+=c;
if(r.l>0)en(r);
else
{
printf("%s %d\n",r.name,flag);
 }
 }
  return 0;
}

void en(P x)
{
  A[mini]=x;
  mini=(mini+1)% N;
}
 
P de()
{
  P x=A[max];
  max=(max+1)%N;
  return x;
}

int mi(int a,int b)
{
  return a<b?a:b;
}

