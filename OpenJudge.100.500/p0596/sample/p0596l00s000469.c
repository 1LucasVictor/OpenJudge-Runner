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

int main(){
  char S[100010];
  fgets(S, sizeof(S), stdin);
  int N=strlen(S);
  N--;

  char c=S[0];
  int count_0=0;
  int count_1=0;
  int n=0;
  int temp=n;
  int sum=0;

  while(true){
    while(n<N && S[n]==c){
      n++;
    }
    count_1=count_1+n-temp;
    temp=n;

    while(n<N &&S[n]!=c){
      n++;
    }
    count_0=count_0+n-temp;
    temp=n;

    if(count_1>=count_0){
      sum=sum+count_0;
      count_1=count_1-count_0;
      count_0=0;
    }
    else{
      sum=sum+count_1;
      count_1=0;
      count_0=count_0-count_1;
    }

    if(n==N){
      break;
    }
  }

  printf("%d\n", sum*2);

  return 0;
}
