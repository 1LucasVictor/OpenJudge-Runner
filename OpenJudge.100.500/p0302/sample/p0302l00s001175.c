#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

#define M 1000000
#define L 12

char H[M][L];

int getChar(char ch){
  if(ch=='A') return 1;
  else if(ch=='C') return 2;
  else if(ch=='G') return 3;
  else if(ch=='T') return 4;
}

long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for(i=0;i<strlen(str);i++){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key)
{
  return key%M;
}

int h2(int key)
{
  return 1+key%(M-1);
}

int find(char str[])
{
  long long sum;
  int i,j;

  sum = getKey(str);

  for(i=0;;i++){
    j = (h1(sum)+i*h2(sum))%M;
    if(strcmp(H[j],str)==0) return 1;
    else if(strlen(H[j])==0) return 0;
  }
}  

int insert(char str[]){
  long long sum;
  int i,h;

  sum = getKey(str);
  
  for(i=0;;i++){
    h = (h1(sum)+i*h2(sum))%M;
    if(strcmp(H[h],str)==0) return 1;
    else if(strlen(H[h])==0){
      strcpy(H[h],str);
      return 0;
    }
  }
}

int main(){
  int i,n;
  char str[L],c[9];
  
  for(i=0;i<M;i++) H[i][0] = '\0';
    
  scanf("%d",&n);
    
  for(i=0;i<n;i++){
    scanf("%s%s",c,str);
    if(c[0]=='i') insert(str);
    else{
      if(find(str)==1) printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
}  

