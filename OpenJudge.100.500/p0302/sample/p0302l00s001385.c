#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 12
#define M 13
#define MOD 1000003
#define Gard 0

void InsertWord(char []);
int ChangeNum(char );
long long Convert(char []);
int CalH(int );
int CalAnoH(int );
int SearchWord(char []);

char Hash[MOD][M];

int main(){
  int loop,judge=0,i;
  char order[N],spel[N];

  scanf("%d",&loop);
  for(i=0;i<loop;i++){
    scanf("%s %s",order,spel);

    if(order[0]=='f'){
 
      judge=SearchWord(spel);

      if(judge==1){
	printf("yes\n");
      }
      

      else if(judge==Gard){
	printf("no\n");
      }
      
    }

    else if(order[0]=='i'){
      InsertWord(spel);
    }
    
  }
  return 0;
}

void InsertWord(char spel[]){
  long long result,phase,judge;
  int equalch=0;
  int slength=0;
 

  judge=Convert(spel);

  phase=0;
  
  while(1){
    result=(CalH(judge)+CalAnoH(judge)*phase)%MOD;

    equalch=strcmp(Hash[result],spel);
    slength=strlen(Hash[result]);

    if(equalch==Gard){
      break;
    }

    else if(slength==Gard){
      strcpy(Hash[result],spel);
      break;
    }

    else{
      phase++;
    }
    
  }
}

long long Convert(char spel[]){
  long long result=0,value;
  long long i;

  value=1;

  for(i=0;i<(long long)strlen(spel);i++){
    result+=value*(ChangeNum(spel[i]));
    value=value*5;
  }

  return result;
}

int ChangeNum(char spel){

  if(spel=='A'){
    return 1;
  }

  else if(spel=='C'){
    return 2;
  }

  else if(spel=='G'){
    return 3;
  }

  else if(spel=='T'){
    return 4;
  }

  return 0;
}

int CalH(int judge){
  int res=0;

  res=judge%MOD;

  return res;
}

int CalAnoH(int judge){
  int res=0;

  res=(judge%(MOD-1))+1;

  return res;
}

int SearchWord(char spel[]){
  long long result,phase,judge;
  int equalch=0;
  int slength=0;
  int flag=0;
 
  judge=Convert(spel);

  phase=0;
  
  while(1){
    result=(CalH(judge)+CalAnoH(judge)*phase)%MOD;

    equalch=strcmp(Hash[result],spel);
    slength=strlen(Hash[result]);

    if(equalch==Gard){
      flag=1;
      break;
    }

    else if(slength==Gard){
      flag=0;
      break;
    }

    else{
      phase++;
    }
    
  }

  if(flag==1){
    return 1;
  }
  
  return 0;
}


