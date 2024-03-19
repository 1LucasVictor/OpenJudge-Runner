#include<stdio.h>
#include<string.h>

/*int find(char **,char *,int);*/

int main(){
  int n,i,j,l=0;
  char s[100000][13];
  char q[2][10]={"insert","find"};
  char a[2][5]={"yes","no"};
  char o[10],w[13];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",o,w);

    if(strcmp(o,q[0])==0){
      strncpy(s[l],w,13);
      l++;
    }
    
    else if(strcmp(o,q[1])==0){
      int find=1;
      for(j=0;j<n;j++){
	if(strcmp(s[j],w)==0){
	  find=0;
	}
      }
      printf("%s\n",a[find]);
    }
  }
  
  return 0;
}
/*
int find(char *A[],char t[],int n){
  int i;
  
  for(i=0;i<n;i++){
    if(strcmp(A[i],t)==0){
      return 1;
    }
  }
  
  return 0; 
}
*/