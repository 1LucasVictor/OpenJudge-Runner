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
  char s[4];

  fgets(buf,sizeof(buf),stdin);
  sscanf(buf, "%s", s);

  int count[26];
  rep(i,26){
    count[i]=0;
  }

  rep(i,4){
    count[s[i]-'A']++;
  }

  int flag=0;
  rep(i,26){
    if(count[i]!=0 && count[i]!=2){
      flag=1;
    }
  }

  if(flag==0){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }

  return 0;

}
