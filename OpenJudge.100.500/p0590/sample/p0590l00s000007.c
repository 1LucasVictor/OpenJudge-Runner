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
  char buf[1024];
  int *a=(int *)malloc(sizeof(int)*5);
  int k;

  rep(i,5){
    fgets(buf,sizeof(buf),stdin);
    sscanf(buf, "%d", &a[i]);
  }
  fgets(buf,sizeof(buf),stdin);
  sscanf(buf, "%d", &k);

  if(a[4]-a[0]<=k){
    printf("Yay!\n");
  }
  else{
    printf(":(\n");
  }

  return 0;


}
