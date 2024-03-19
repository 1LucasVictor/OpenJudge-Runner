#include<stdio.h>
#include<string.h>

int main(){
  char str[1001],instruction[50],inputString[1000];
  int instructionNum;
  int i,k,j,inputNum[2];

  scanf("%s",str);
  scanf("%d",&instructionNum);
  
  for(i=0; i<instructionNum; ++i){
    scanf("%s %d %d", instruction, &inputNum[0], &inputNum[1]);
    
    if(strcmp(instruction,"replace") == 0){
      scanf("%s", inputString);
      for(k=0; k<inputNum[1] - inputNum[0] + 1; ++k){
	str[inputNum[0] + k] = inputString[k];
      }
    }else if(strcmp(instruction,"reverse") == 0){
      for(k=inputNum[0]; k<(inputNum[1] + inputNum[0])/2; ++k){
	char work = str[k];
	str[k] = str[inputNum[1] - (k - inputNum[0])];
	str[inputNum[1] - (k - inputNum[0])] = work;
      }
    }else if(strcmp(instruction,"print") == 0){
      for(k=inputNum[0];k<inputNum[1] + 1; ++k){
	printf("%c",str[k]);
      }
      printf("\n");
    }
  }
  return 0;
}

