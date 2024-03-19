#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

#define M 1000000
#define L 12

char H[M][L];

int gC(char ch){
  int ct;
  if(ch=='A'){
    ct = 1;
  }
  else if(ch=='C'){
    ct = 2;
  }
  else if(ch=='G'){
    ct = 3;
  }
  else if(ch=='T'){
    ct = 4;
  }
  return ct;
}

long long gK(char str[]){
  
  long long sum = 0, p = 1, i;
  
  for(i=0;i<strlen(str);i++){
    
    sum += p*(gC(str[i]));
    
    p *= 5;
    
  }
  return sum;
}

int A(int key)
{
  return key%M;
}

int B(int key)
{
  return 1+key%(M-1);
}

int find(char str[])
{
  long long sum;
  int i,j;

  sum = gK(str);

  for(i=0;;i++){
    
    j = (A(sum)+i*B(sum))%M;
    
    if(strcmp(H[j],str)==0) return 1;
    
    else if(strlen(H[j])==0) return 0;
  }
}  

int insert(char str[]){
  long long sum;
  int i,h;

  sum = gK(str);
  
  for(i=0;;i++){
    
    h = (A(sum)+i*B(sum))%M;
    
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



