#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000000

const int  m = 103183;
const int  m2= 102551;
//7069 - 60
char stack[MAX][12];
int h1(int);
int h2(int);
int insert(int,int);
int sti(char *);

int main(){
  int val,i,j,n,dic=0,dicc=MAX,index2=0,vall;
  char op[10],s[12];
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
	  //printf("val = %d",val);
	  //if(stack[val][0] == '\0'){
	  if(strcmp(&stack[val][0],"not") == 0){
	    if(val>dic)dic=val;
	    else if(val<dicc)dicc=val;
	    strcpy(&stack[val][0],&s[0]);
	    //printf("%s\n",stack[val]);
	    break;
	  }
	  else index++;
	  if(index > dic)index=dicc;
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
	  //else if(stack[vall][0] == '\0'){
	  else if(strcmp(&stack[vall][0],"not") == 0){
	    break;
	  }
	  index2++;
	  if(index2 > dic)index2=dicc;
	}
	if(exist == 1)printf("yes\n");
	else printf("no\n");
      }

      //printf("im here!\n");

    }



  }

}


int h1(int k){
  return k%m;
}

int h2(int k){
  return 1+k%m2;
}

int insert(int k,int i){
  return (h1(k) + i*h2(k))%m;
}

int sti(char *s){
  int i=0,sum=0;
  while(s[i] != '\0'){
    sum+=s[i]-'A';
    i++;
  }
  return sum;
}