#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct wordcard{
 char str[13];
 struct wordcard *next;
}word;





int main(){
int n,i;
word* A[13];
word* C[13];
word* G[13];
word* T[13];
char com[3];
word *new;
int x;
word **p;
char temp[13];
word *q;

for(i=1;i<=12;i++){
 A[i]=NULL;
 C[i]=NULL;
 G[i]=NULL;
 T[i]=NULL;
}



scanf("%d",&n);

for(i=0;i<n;i++){
 scanf("%s",com);

 switch(com[0]){
  case 'i':new=(word*)malloc(sizeof(word));
           scanf("%s",new->str);
           new->next=NULL;
           x=strlen(new->str);

           switch(new->str[0]){

             case 'A':p=&A[x];
                      while((*p)!=NULL)p=&((*p)->next);
                      (*p)=new;
                      break;
             case 'C':p=&C[x];
                      while((*p)!=NULL)p=&((*p)->next);
                      (*p)=new;
                      break;
             case 'G':p=&G[x];
                      while((*p)!=NULL)p=&((*p)->next);
                      (*p)=new;
                      break;
             case 'T':p=&T[x];
                      while((*p)!=NULL)p=&((*p)->next);
                      (*p)=new;
                      break;
            }

           break;
  case 'f':scanf("%s",temp);
           x=strlen(temp);
           switch(temp[0]){

             case 'A':q=A[x];
                      while(q!=NULL){
                        if(strcmp(temp,q->str)==0){printf("yes\n");break;}
                        else{q=q->next;}
                      }
                      if(q==NULL)printf("no\n");
                      break;

             case 'C':q=C[x];
                      while(q!=NULL){
                        if(strcmp(temp,q->str)==0){printf("yes\n");break;}
                        else{q=q->next;}
                      }
                      if(q==NULL)printf("no\n");
                      break;

             case 'G':q=G[x];
                      while(q!=NULL){
                        if(strcmp(temp,q->str)==0){printf("yes\n");break;}
                        else{q=q->next;}
                      }
                      if(q==NULL)printf("no\n");
                      break;

             case 'T':q=T[x];
                      while(q!=NULL){
                        if(strcmp(temp,q->str)==0){printf("yes\n");break;}
                        else{q=q->next;}
                      }
                      if(q==NULL)printf("no\n");
                      break;
            }

           break;
 }/*switch end*/

}/*for end*/


return 0;
}
