#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100000
#define STR 12
int main(){
  int n,i,j,a=0,c=0,g=0,t=0,flag=0;
  char order[6];
  char orders[2][6]={"insert","find"};
  char word[STR];
  char dicA[N][STR];
  char dicC[N][STR];
  char dicG[N][STR];
  char dicT[N][STR];
  
  
    scanf("%d",&n); 
  for(i=0;i<n;i++){
    flag=0;
    scanf("%s%s",order,word);
    
    if(strncmp(order,orders[0],6)==0){
      if(word[0]=='A'){
	strcpy(dicA[a],word);
	a++;
      }
      else if(word[0]=='C'){
	strcpy(dicC[c],word);
	c++;
      }
      else if(word[0]=='G'){
	strcpy(dicG[g],word);
	g++;
      }
      else if(word[0]=='T'){
	strcpy(dicT[t],word);
	t++;
      }
    }
    else if(strcmp(order,orders[1])==0){    
      
      if(word[0]=='A'){
	for(j=0;j<a;j++){
	  if(strcmp(&dicA[j][0],word)==0){
	    flag=1;
	    break;
	  }
	}
	
	if(flag==1)printf("yes\n");
	if(flag==0) printf("no\n");
      }
      else if(word[0]=='C'){
	for(j=0;j<c;j++){
	  if(strcmp(&dicC[j][0],word)==0){
	    flag=1;
	    break;
	  }
	}
	
	if(flag==1)printf("yes\n");
	if(flag==0) printf("no\n");
      }  
      
      else if(word[0]=='G'){
	for(j=0;j<g;j++){
	  if(strcmp(&dicG[j][0],word)==0){
	    flag=1;
	    break;
	  }
	}
	
	if(flag==1)printf("yes\n");
	if(flag==0) printf("no\n");
      }  
      
      else if(word[0]=='T'){
	for(j=0;j<t;j++){
	  if(strcmp(&dicT[j][0],word)==0){
	    flag=1;
	    break;
	  }
	}
	
	if(flag==1)printf("yes\n");
	if(flag==0) printf("no\n");
      }
    }
  }
  return 0;
}