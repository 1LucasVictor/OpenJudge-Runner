#include<stdio.h>

int main(){
  while(1){
    char ans[201];
    int m,h;
    int i,k,j,string_size=0;
    char work;
    
    scanf("%s",ans);

    if(strcmp(ans, "-") == 0) break;
    
    for(i=0; i<201; ++i){
      if(ans[i] == '\n' || ans[i] == '\0') break;
      ++string_size;
    }
    
    scanf("%d",&m);
    
    for(i=0; i<m; ++i){
      scanf("%d",&h);
      
      for(k=0; k<h; ++k){
	work = ans[0];
	
	for(j=0; j<string_size-1; ++j){
	  ans[j] = ans[j+1];
	}
	ans[string_size-1] = work;
      }
    }

    printf("%s\n", ans);
    
  }
  return 0;
}

