#include<stdio.h>
#define N 10000
#define s 100

typedef struct{
 char name[s];
  int time;
}Q;

Q A[N+1];
int h, t;

void ENQ(Q J){ 
  if( N==t ) t = 0;
  A[t] = J;
  t++;
}
Q DEQ(void){
  if( h==N ) h = 0;
  return A[h++];
}

int main()
{
  int n, q, i, T=0;
  Q u;
  scanf("%d %d", &n, &q);
  
  for( i=0 ; i<n ; i++ ){
    scanf("%s %d", u.name, &u.time);
    ENQ(u);
  }
  while(n!=0){
    u = DEQ();
    if( u.time>q ){
      u.time = u.time - q; 
      T += q;
      ENQ(u);
    } 
    else{
      T += u.time;
      printf("%s %d\n", u.name, T);
      n--;
    }
  }
  return 0;
}