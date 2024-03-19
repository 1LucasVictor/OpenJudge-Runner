/*
Volume0-0009
*/
//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000000
#define TRUE (int)(0==0)
#define FALSE !TRUE
#define BUFLEN 1024
//using std;

int syserr(char *str)
{
  fputs(str, stderr);
  exit(-1);
}
int main(int argc, char *argv[]){
  int f[N];
  int i;
  int j;
  int n;
  int m;
  char buf[BUFLEN];

  //  memset(f, TRUE, N);
  f[0]=FALSE;
  f[1]=FALSE;
  for (i=2; i<N; i++)
    f[i] = TRUE;

  for (i=2; i<N; i++){
    if (f[i] == TRUE ) {
      for (j=i+i; j<N; j+=i){
	f[j] = FALSE;
      }
    }
  }

  while (fgets(buf, BUFLEN, stdin) != NULL){
    n = atoi(buf);

    m = 0;
    for (i=1; i<=n; i++){
      if (f[i]){
	m++;
      }
    }
    printf("%d\n", m);
  }
 
  exit(0);
}