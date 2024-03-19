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
  char *s=(char *)malloc(sizeof(char)*4);

  fgets(buf,sizeof(buf),stdin);
  sscanf(buf, "%s", s);

  if(s[0]==s[1] || s[1]==s[2] || s[2]==s[3]){
    printf("Bad\n");
  }
  else{
    printf("Good\n");
  }

  return 0;
}
