#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct word{

 char str[13];
 int num;

}word;



int find(word word[],char temp[],int last){
int i;

for(i=0;i<last;i++){
 if(word[i].num==-1){
  if(strcmp(word[i].str,temp)==0){return 1;}
 }
}
return 0;
}
 






int main(){
int n,i;
int A[MAX]={0};
char com[10];
char temp[13];
word word[MAX];

scanf("%d",&n);



for(i=0;i<n;i++){
 scanf("%s",com);
 switch(com[0]){
  case 'i':scanf("%s",&word[i].str);
           word[i].num=-1;
           break;
  case 'f':scanf("%s",temp);
           word[i].num=find(word,temp,i);
           break;
 }
}



for(i=0;i<n;i++){
 switch(word[i].num){
  case 1:printf("yes\n");
         break;
  case 0:printf("no\n");
         break;
 }
}



return 0;
}
