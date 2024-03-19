#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define n_max 1000

int main(){
  int n,i,j=0,k,F,f,len1,len2,l;
  char st[n_max][12],c1[n_max][12],c2[n_max][12];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    scanf("%s %s",&c1[i],&c2[i]);
  
  for(i=0;i<n;i++){
    if(c1[i][0]=='i'){
      strcpy(st[j],c2[i]);
      j++;
    }
    if(c1[i][0]=='f'){
      len1=strlen(c2[i]);
      F=0;
      for(k=0;k<j;k++){
	f=0;
	len2=strlen(st[k]);
	if(len1!=len2) continue;
	if(strcmp(st[k],c2[i])!=0){
	  f=1;
	}
	else if(f==0){
	  F=1;
	  printf("yes\n");
	}
      }
      if(F==0) printf("no\n");
    }
  }
  return 0;
}

