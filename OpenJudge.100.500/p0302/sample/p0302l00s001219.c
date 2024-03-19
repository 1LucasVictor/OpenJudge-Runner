#include<stdio.h>
#include<string.h>
#include<string.h>
#define N 100000
#define S 12
char dic[N][S];
int main(){
  int a=0,c=0,g=0,t=0,i,j,n,flag=0;
  char order[10];
  char word[S],dicA[N][S],dicC[N][S],dicG[N][S],dicT[N][S];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    flag=0;
    scanf("%s%s",order,word);
    if(strncmp(order,"insert",6)==0){
      switch(word[0]){
      case('A'):
	strcpy(dicA[a],word);
	a++;
	break;
	
      case('C'):
	strcpy(dicC[c],word);
	c++;
	break;
	
      case('G'):
	strcpy(dicG[g],word);
	g++;
	break;
      case('T'):
	strcpy(dicT[t],word);
	t++;
	break;
      }
    }
    else{
      switch(word[0]){
      case('A'):
	for(j=0;j<a;j++){
	  if(strcmp(&dicA[j][0],word)==0){
	    flag=1;
	    break;
	  }
	}
      case('C'):
	for(j=0;j<c;j++){
	  if(strcmp(&dicC[j][0],word)==0){
	    flag=1;
	    break;
	  }
	}
      case('G'):
	for(j=0;j<g;j++){
	  if(strcmp(&dicG[j][0],word)==0 &&  flag==1){
	    flag=1;
	  break;
	  }
	}
      case('T'):
	for(j=0;j<t;j++){
	  if(strcmp(&dicT[j][0],word)==0){
	    flag=1;
	  break;
	  }
	}
      }
      if(flag==1) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}