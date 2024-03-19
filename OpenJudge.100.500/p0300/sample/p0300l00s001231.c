#include <stdio.h>

#define MAX 1000000

int main(){
  int n,s[MAX],q,t[MAX];
  int i,j;
  int count=0;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  
  scanf("%d",&q);

  for(i=0;i<q;i++){
    scanf("%d",&t[i]);
  }
  
            for(i=0;i<n;i++){
	      for(j=0;j<q;j++){
		      if(t[j] == s[i]){
			count += 1;
			break;
		      }
		      else continue;
		    }
	    }
	    
	    printf("%d\n",count);
	    return 0;
}