#include<stdio.h>
#include<string.h>

int main()
{
 int a,i,b,c,k;
 char j;
 char moji[1000],shiji[8],rep[1000];
 scanf("%s",&moji);
 scanf("%d",&a);
 for(i=0;i<a;i++){
                     scanf("%s",&shiji);
                     if(strcmp(shiji,"replace")==0){
                                                     scanf("%d%d%s",&b,&c,&rep);
                                                     for(j=0;j<c-b+1;j++){
                                                                          moji[b+j]=rep[j];
                                                                          }
                                                    }
                     if(strcmp(shiji,"reverse")==0){
                                                   scanf("%d%d",&b,&c);
                                                   for(;b<c;){
                                                              j=moji[b];
                                                              moji[b]=moji[c];
                                                              moji[c]=j;
                                                              b++;
                                                              c--;
                                                              }    
                                                     }         
                           
                     if(strcmp(shiji,"print")==0){         
                                                  scanf("%d%d",&b,&c);
                                                  for(k=b;k<c+1;k++){
                                                  printf("%c",moji[k]);
                                                                    }
                                                  printf("\n");
                                                  }

                     }
   return 0;

}
