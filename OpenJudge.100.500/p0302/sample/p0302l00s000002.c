#include <stdio.h>
#include <math.h>

void insert(int code);
void find(int code);

/*
A:1
C:2
G:3
T:4
 */

char dictionary[33333334];
int dictLen = 0;

main(){

  int i,j,n;
  char command[7];
  char op;
  int code;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",command);
    j=0; code=0;
    while(j<=8){
      scanf("%c",&op);
      if(op=='\n') break;
      switch(op){
      case 'A':
	code+=0*pow(10,j);
	break;
      case 'C':
	code+=1*pow(10,j);
	break;
      case 'G':
	code+=2*pow(10,j);
	break;
      case 'T':
	code+=3*pow(10,j);
	break;
      default:
	break;
      }
      j++;
    }
    if(command[0] == 'i'){ // insert
      insert(code);
    }else if(command[0] == 'f'){ // find
      find(code);
    }
  }

  return 0;

}

void insert(int code){

  if(dictionary[code] == 0){
    dictionary[code] = 1;
  }

}

void find(int code){

  if(dictionary[code] == 1){
    printf("yes\n");
  }else{
    printf("no\n");
  }

}