#include <stdio.h>
#include <math.h>

void insert(int code);
void find(int code);
int getIndex(int code);

/*
A:1
C:2
G:3
T:4
 */

char dictionary[390626];
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
	code+=1*pow(10,j);
	j++;
	break;
      case 'C':
	code+=2*pow(10,j);
	j++;
	break;
      case 'G':
	code+=3*pow(10,j);
	j++;
	break;
      case 'T':
	code+=4*pow(10,j);
	j++;
	break;
      default:
	break;
      }
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

  int index = getIndex(code);
  if(dictionary[index] == 0){
    dictionary[index] = 1;
  }

}

void find(int code){

  int index = getIndex(code);
  if(dictionary[index] == 1){
    printf("yes\n");
  }else{
    printf("no\n");
  }

}

int getIndex(int code){

  int i;
  int tmp;
  int _code = code;
  int index = 0;

  for(i=0; i<8; i++){
    tmp = _code % 10;
    _code /= 10;
    index += pow(5,i) * tmp;
  }

  return index;

}