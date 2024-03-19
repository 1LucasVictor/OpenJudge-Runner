#include<stdio.h>
#include<string.h>
int main(void){
 char moji[1001],comm[100],kari[1001];
 int i,j,q,a,b;
 scanf("%s%d",moji,&q);
  for(i=0;i<q;i++){
   scanf("%s%d%d",comm,&a,&b);
   if(strcmp(comm,"print")==0) {
    for(j=a;j<b+1;j++){
     printf("%c",moji[j]);
    }
    printf("\n");
   }
   if(strcmp(comm,"reverse")==0) {
       strcpy(kari,moji);
    for(j=a;j<b+1;j++){
     moji[j]=kari[b-(j-a)];
    }
   }
   if(strcmp(comm,"replace")==0) {
    scanf("%s",kari);
     for(j=a;j<=b;j++){
      moji[j]=kari[j-a];
     }
  }
 }
 return 0;
}

