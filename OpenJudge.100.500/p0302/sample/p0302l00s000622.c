#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
  }
int getKey(char *font){
  int len,ten=1,sum=0;
  int i;
  len=strlen(font);
    for(i=len-1;0<=i;i--){
      sum=sum+ten*getChar(font[i]);
      ten=ten*10;
    }
  return sum;
  }
int main(){
  int n,A[1000000],a=0,b;
  int i,j,count;
  char com[7],font[12];
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s%s",&com,&font);
    b=getKey(font);
    if ( com[0] == 'i' ){
      A[a]=b;
      a++;
    } else {
      count=0;
      for(j=0;j<=a;j++){
	if(b==A[j]){
	  count++;
	  break;
	}
      }
      if(count==1)printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

