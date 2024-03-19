#include <stdio.h>
#include <string.h>

int main(){

  char *str;

  scanf("%s",str);

  int n;

  scanf("%d",&n);

  int a;

  char command[n][10];

  int s[n],t[n];

  char use[100][1000];

  for(a=0;a<=n-1;a++){

    scanf("%*c%s %d %d",&command[a],&s[a],&t[a]);

    if(strcmp(command[a],"replace")==0)

      scanf(" %s",use[a]);

  }

  int b,c[n];

  for(b=0;b<=n-1;b++){

    if(strcmp(command[b],"print")==0){

      for(c[b]=s[b];c[b]<=t[b];c[b]++){

	printf("%c",str[c[b]]);

      }

      printf("\n");

    }else if(strcmp(command[b],"replace")==0){

      for(c[b]=s[b];c[b]<=t[b];c[b]++){

	str[c[b]]=use[b][c[b]-s[b]];

      }

    }else{

      //りばーすしたい

      char alpha;

      double half=(t[b]-s[b])/2;

      for(c[b]=0;c[b]<half;c[b]++){

	alpha=str[s[b]+c[b]];
	str[s[b]+c[b]]=str[t[b]-c[b]];
	str[t[b]-c[b]]=alpha;

      }

    }

  }


  /*
  printf("%s",str);
  */

  return 0;

}