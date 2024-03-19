#include<stdio.h>
#define N 1000000
#include<string.h>
 
char c[13];
int x[N];
int n;
 
int a(void);
int b(char);
void insert(void);
void find(void);
 
int main(){
char str[12];
int i;
 
 scanf("%d",&n);
 for(i=0;i<n;i++){
   scanf("%s%s",str,c);
   if(strcmp("insert",str)==0){
     insert();
   }
   if(strcmp("find",str)==0){
     find();
   }
 }
 return 0;
}
 
int a(void){
  int x=0,i,p=1;
  for(i=0;i<strlen(c);i++){
    x+=p*(b(c[i]));
    p*=5;
  }
  return x;
}
 
int b(char c){
 
  if(c=='A'){
    return 1;
  }
  else if(c=='C'){
    return 2;
  }
  else if(c=='G'){
    return 3;
  }
  else return 4;
 
}
void insert(){
  x[a()]=1;
}
 
 
void find(){
  if(x[a()]==1){
    puts("yes");
  }
  else puts("no");
}
 