#include<stdio.h>

#define MAX_S 10000
#define MAX_T 500


int linearSearch(){
  int i,j,count,k,l;
  int s[MAX_S],t[MAX_T];

  count = 0;
  
  scanf("%d",&k);
  for(i = 0; i < k; i++)
    scanf("%d",&s[i]);
  
  scanf("%d",&l);
  for(i = 0; i < l; i++)
    scanf("%d",&t[i]);

    for(i = 0; i < l; i++)
      for(j = 0; j < k; j++)
	if(t[i] == s[j]){
	  count++;
	  break;
	}
    
  return count;
}

int main(){
  
  printf("%d\n",linearSearch());
  
  return 0;
}

