#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include<ctype.h>
#include<limits.h>

//qsort
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

//比較
int max(int a, int b){
	if (a>b) return a;
	else return b;
}

int min(int a,int b) {
	if(a>b) return b;
	else return a;
}


//main関数
int main() {
	char sakoda[3];
  scanf("%s",sakoda);
  if(strcmp(sakoda,"ABC") == 0) {
    printf("ARC");
  }
  else {
    printf("ABC");
  }
  
}
  
  