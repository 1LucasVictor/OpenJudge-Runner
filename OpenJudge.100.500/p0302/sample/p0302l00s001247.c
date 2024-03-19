#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000040
  
const int  m = 1000033;
//const int  m2= 1000003;
//7069 - 60
char stack[MAX][15];
int h1(long long);
int h2(long long);
int insert(long long,int);
long long sti(char *);
  
int main(){
  int val,i,j,n,dic=0,dicc=MAX,index2=0,vall;
  char op[15],s[15];
  int exist=-1,index=0;
  
  while(scanf("%d",&n) != EOF){
    dic=0,dicc=MAX;
    for(i=0;i<=MAX;i++)strcpy(&stack[i][0],"not");
    for(i=0;i<n;i++){
      exist=-1;
      scanf("%s %s",op,s);
      if(op[0] == 'i'){
    index=0;
    while(1){
      val = insert(sti(&s[0]),index);
      if(strcmp(&stack[val][0],"not") == 0){
        strcpy(&stack[val][0],&s[0]);
        break;
      }
      else index++;
      if(index == MAX)break;
    }
      }
      else if(op[0] =='f'){
    index2=0;
    while(1){
      vall=insert(sti(s),index2);
      if(strcmp(stack[vall],s) == 0){
        exist=1;
        break;
      }
      else if(strcmp(&stack[vall][0],"not") == 0){
        break;
      }
      index2++;
      if(index2 == MAX)break;
    }
    if(exist == 1)printf("yes\n");
    else printf("no\n");
      }
    }
  }
  return 0;
}
  
  
int h1(long long k){
  return k%m;
}
  
int h2(long long k){
  return 1+k%(m-1);
}
  
int insert(long long k,int i){
  return (h1(k) + i*h2(k))%m;
}
  
long long sti(char *s){
  long long i=0,sum=0;
  while(s[i] != '\0'){
    sum*=10;
    sum+=s[i]-'A'+1;
    i++;
  }
  return sum;
}
