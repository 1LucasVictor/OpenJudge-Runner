#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "unistd.h"
#include "string.h"
#include <math.h>
int ans=0;
long long sort(long long d[],int NumberArrays,int up){
  int tmp;
  for (int i = 0; i < NumberArrays-1; i++) {
    if (up && d[i]<d[i+1]) {
      d[i]=tmp;
      d[i]=d[i+1];
      d[i+1]=tmp;
    }else if (d[i]>d[i+1]) {
      d[i]=tmp;
      d[i]=d[i+1];
      d[i+1]=tmp;
    }
  }
}
int main(int argc, char* argv[]){
	long long int a = 0, b = 0, c = 0,d[10000];
  char f[3];
	scanf("%s",f);
  for (int i = 0; i < 3; i++) {
    if (f[i]=='7') {
      printf("Yes" );
      return 0;
    }
  }
  printf("No");
}
