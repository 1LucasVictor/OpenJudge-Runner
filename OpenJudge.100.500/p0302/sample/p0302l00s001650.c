#include <stdio.h>
#include <string.h>

struct Insert{
  char strI[12];    
};

struct Find{
  char strF[12];
};

int main(){
  int n,i,j,insertcount=0,findcount=0,result=0;
  char c[10];
  struct Insert insert[10000];
  struct Find find[10000];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%s",&c);
    if(strcmp(c,"insert")==0){
      scanf("%s",&insert[insertcount].strI);     
      insertcount++;
    }
    else if(strcmp(c,"find")==0){
      scanf("%s",&find[findcount].strF);
      
      
      for(j=0;j<insertcount;j++){
	if(strcmp(find[findcount].strF,insert[j].strI)==0){
	  printf("yes\n");
	  result=1;
	  break;
	}
      }//for end
       if(result==0){
	printf("no\n");
	 }
      result=0;
      findcount++;
    }//else if end
  }
  
  return 0;
  
}