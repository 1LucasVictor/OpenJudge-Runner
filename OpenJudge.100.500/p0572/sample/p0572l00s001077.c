#include <stdio.h>
#include <stdlib.h>//random,NULL
#include <string.h>
#include <time.h>
#include <unistd.h>//sleep()
#include <math.h>
#include <stdbool.h>

#define rep(i,n) for(int i=0; i<((int)n); i++)
#define REP(i,n) for(int i=0; i<=((int)n); i++)
#define srep(i,a,n) for(int i=a; i<((int)n); i++)
#define SREP(i,a,n) for(int i=a; i<=((int)n); i++)
#define rrep(i,n) for(int i=n-1; i>=0; i--)
#define RREP(i,n) for(int i=n; i>=0; i--)
#define INF 1000000000
const int mod = INF+7;

int main(){
  char buf[1024];
  int L,R;

  fgets(buf,sizeof(buf),stdin);
  sscanf(buf, "%d %d", &L, &R);

  int quo1=L/2019;
  int rem1=L%2019;
  int quo2=R/2019;
  int rem2=R%2019;

  int ans;
  if(quo1==quo2){
    ans=rem1*(rem1+1);
  }
  else{
    ans=0;
  }

  printf("%d\n", ans);

  return 0;
}
