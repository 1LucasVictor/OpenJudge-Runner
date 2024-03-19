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

int min(int a, int b){
  if(a>=b){
    return b;
  }
  else{
    return a;
  }
}

int main(){
  char S[100010];
  fgets(S, sizeof(S), stdin);
  int N=strlen(S);
  N--;

  int count_0=0;
  int count_1=0;

  rep(i,N){
    if(S[i]=='0'){
      count_0++;
    }
    else{
      count_1++;
    }
  }

  int ans=min(count_0, count_1);

  printf("%d\n", ans*2);

  return 0;

}
