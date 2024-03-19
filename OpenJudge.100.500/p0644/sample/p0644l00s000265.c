#include<stdio.h>
#include<string.h>

int main(){
	  int i;
    int count=0;
  	char s[3];

  	for(i=0; i<3; i++){
    	scanf("%c", &s[i]);
    }

    if(s[0]=='1'){
      count++;
    }
    if(s[1]=='1'){
      count++;
    }
    if(s[2]=='1'){
      count++;
    }

    printf("%d", count);


  return 0;

}
