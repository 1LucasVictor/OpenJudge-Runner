#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int x,i=0;
  char s[100];
  int n[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){//printf("DEBUG %d+ %d\n",n[i],n[i-1]);
      n[i-1] = n[i-1] + n[i];
      //printf("DEBUG %d\n",n[i]);
      i--;
    } else if ( s[0] == '-' ){//printf("DEBUG %d- %d\n",n[i],n[i-1]);
      n[i-1] = n[i-1] - n[i];
      i--;
    } else if ( s[0] == '*' ){//printf("DEBUG %d* %d\n",n[i],n[i-1]);
      n[i-1] = n[i-1] * n[i];
      i--;
    } else {
      x = atoi(s);
      n[i+1] = x;
      i++;
    }
  }
  printf("%d\n",n[i]);
  return 0;
}