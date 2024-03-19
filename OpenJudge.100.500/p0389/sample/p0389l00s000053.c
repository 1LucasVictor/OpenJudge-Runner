#include<stdio.h>
#include<string.h>
int main(){
  char card[201],sha[101];
  int m,h,len,i,j;

  while(1){
	  scanf("%s",card);
	  if(card[0] == '-') break;
	  len = strlen(card);

	  scanf("%d",&h);

	  for(m=0;m<h;m++){
	    scanf("%d",&i);
		strncpy(sha,card,i);
		sha[i] = '\0';
		for(j = 0;j<len-i;j++) card[j] = card[i+j];
		card[j] = '\0';
		strcat(card,sha);
	  }
	  printf("%s\n",card);
	}
	return 0;
}