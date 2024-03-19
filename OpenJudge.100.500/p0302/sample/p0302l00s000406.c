#include<stdio.h>
#include<string.h>

int main(){

  int i, j, n,c = 0,f = 0;

  char g[100000][13], arr[13], str[13];

  scanf("%d", &n);

  for( i = 0; i < n; i++){

    scanf("%s", arr);

    if( arr[0] == 'i'){

      scanf("%s", g[c]); 
      c++;
    }

    else if( arr[0] == 'f'){
      f = 0;
      scanf("%s", str);
      for( j = 0; j < c; j++){

	if( strcmp( g[j],str) == 0){
	  f =1;	  
	  printf("yes\n");
	  break;
	}
      }
	if( f != 1)
	  printf("no\n");
    }
  }
  return 0;
}