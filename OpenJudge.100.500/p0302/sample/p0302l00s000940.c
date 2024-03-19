#include <stdio.h>
#include <string.h>
#define SIZE 1000000
#define LENGTH 14
void in(char *);
int find(char *);
int h1(int);
int h2(int);
int ctoi(char);
char Hash[SIZE][LENGTH];
int main(){
  int i,num;
  char array[LENGTH],command[9];

  scanf("%d",&num);

  for(i=0;i<num;i++){
    scanf("%s",command);
    scanf("%s",array);
    if(command[0]=='i') in(array);
    else{
      if(find(array)==1) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

void in(char *array){
  int i,sum=0,num=1,h;
  for(i=0;i<strlen(array);i++){
    sum+=num*(ctoi(array[i]));
    num*=5;
  }
  i=0;
  while(1){
    h=(h1(sum)+i*h2(sum))%SIZE;
      if(strcmp(Hash[h],array)==0) return;
      else if(strlen(Hash[h])==0){
	strcpy(Hash[h],array);
	return;
      }
    i++;
  }
  return;
}

int find(char *array){
  int i,sum=0,num=1,h;
  for(i=0;i<strlen(array);i++){
    sum+=num*(ctoi(array[i])); 
    num*=5;
  }
  i=0;
  while(1){
    h=(h1(sum)+i*h2(sum))%SIZE;
      if(strcmp(Hash[h],array)==0) return 1; /*found*/
      else if(strlen(Hash[h])==0) return 0; /* not found*/
    i++;
  }
  return 0;
}

int h1(int sum){
  return sum%SIZE;
}
int h2(int sum){
return 1+(sum%(SIZE-1));
}

/*convert character into value*/
int ctoi(char c){
  if(c=='A') return 1;
  else if(c=='C')return 2;
  else if(c=='G') return 3;
  else if(c=='T') return 4;
  else return 0;
}

