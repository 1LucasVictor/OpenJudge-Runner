#include<stdio.h>
#include<string.h>
#define MAX 100000

typedef struct word{
 char str[13];
}word;


int find(struct word X[],word temp,int last){
int i;

for(i=0;i<last;i++){
 if(strlen(X[i].str)==strlen(temp.str)){
  if(strcmp(X[i].str,temp.str)==0){return 1;}
 }
}
return 0;
}




int main(){
int n,i;
char com[7];
word A[MAX];
word C[MAX];
word G[MAX];
word T[MAX];
word temp;
int lastA=0;
int lastC=0;
int lastG=0;
int lastT=0;
int CH[MAX];




scanf("%d",&n);


for(i=0;i<n;i++){CH[i]=-1;}



for(i=0;i<n;i++){
 scanf("%s",com);
 switch(com[0]){
  case 'i':scanf("%s",temp.str);
           switch(temp.str[0]){
            case 'A':A[lastA]=temp;
                     lastA++;
                     break;
            case 'C':C[lastC]=temp;
                     lastC++;
                     break;
            case 'G':G[lastG]=temp;
                     lastG++;
                     break;
            case 'T':T[lastT]=temp;
                     lastT++;
                     break;
           }
           break;

  case 'f':scanf("%s",temp.str);
           switch(temp.str[0]){
            case 'A':CH[i]=find(A,temp,lastA);
                     break;
            case 'C':CH[i]=find(C,temp,lastC);
                     break;
            case 'G':CH[i]=find(G,temp,lastG);
                     break;
            case 'T':CH[i]=find(T,temp,lastT);
                     break;
           }
           break;

 }
}

for(i=0;i<n;i++){
 if(CH[i]==1){printf("yes\n");}
 else if(CH[i]==0){printf("no\n");}
}

return 0;
}
