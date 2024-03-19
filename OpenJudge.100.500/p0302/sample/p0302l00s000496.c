#include<stdio.h>
#include<string.h>

#define M 1046527
#define NIL (-1)
#define L 14

char Hash[M][L];

int getComand(char a){
  if(a == 'A') return 1;
  else if(a == 'C')return 2;
  else if(a == 'G')return 3;
  else if(a == 'T')return 4;
  else return 0;
}

long long getK(char inf[]){
  long long sum=0,p=1,i;
  
  for(i=0;i<strlen(inf);i++){
    sum+=p*(getComand(inf[i]));
    p*=5;
  }
  return sum;
}

int h1(int k){return k%M;}
int h2(int k){return 1+(k%(M-1));}

int find(char inf[]){
  long long k,i,h;
  
  k=getK(inf);
  
  for(i=0;;i++){
    h=(h1(k)+ i*h2(k))%M;
    if(strcmp(Hash[h],inf)==0)return 1;
    else if(strlen(Hash[h])==0)return 0;
  }
  return 0;
}

int ins(char inf[]){
  
  long long k,i,h;
  
  k=getK(inf);
  
  for(i= 0;;i++){
    h=(h1(k)+i*h2(k))%M;
    
    if(strcmp(Hash[h],inf)==0)return 1;
    else if(strlen(Hash[h])==0){
      strcpy(Hash[h],inf);
      return 0;
    }
  }
  return 0;
}

int main(){
  int i,n,h;
  char inf[L],comand[9];
  
  for(i=0;i<M;i++)Hash[i][0]='\0';
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%s%s",&comand,&inf);

    if(comand[0]=='i')ins(inf);
    
    else{
      if(find(inf))printf("yes\n");
      else printf("no\n");      
    }
  }
  return 0;
}



