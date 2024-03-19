#include <stdio.h>
#include <string.h>
typedef struct {
  char value[3]; 
}SCHD;
int main(){
  SCHD card[36];
  SCHD ext1card[36];
  SCHD ext2card[36];
  char str[3];
  int n,i,j;
  int min,sn=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){   
    scanf("%s",card[i].value);
    strcpy(ext1card[i].value,card[i].value);
    strcpy(ext2card[i].value,card[i].value);
  }
  for(i=0;i<n;i++){
    for(j=n-1;j>i;j--){
      if(card[j].value[1]<card[j-1].value[1]){
	strcpy(str,card[j].value);
	strcpy(card[j].value,card[j-1].value);
	strcpy(card[j-1].value,str);
      }     
    }
  }
  for(i=0;i<n;i++){
    if(i==n-1){
 printf("%s",card[i].value);
 continue;
    }
    printf("%s ",card[i].value);
  }
  printf("\n"); 
  for(i=0;i<n;i++){
    for(j=1;j<n;j++){
      if(strcmp(card[i].value,ext1card[j-1].value)==0&&card[i].value[1]==ext1card[j].value[1]){     
	sn=1;
	break;	
      }
      else if(strcmp(card[i].value,ext1card[n-1].value)==0&&card[i].value[1]==ext1card[j].value[1]){
	sn=1;
	break;
      }
    }    
    if(sn==1) break;
  }  
  if(j==n)printf("Not stable\n");
  else printf("Stable\n");
  for(i=0;i<n-1;i++){
    min=i;
    for(j=i;j<n;j++){
      if(ext1card[j].value[1]<ext1card[min].value[1])min=j;
    }
    strcpy(str,ext1card[i].value);
    strcpy(ext1card[i].value,ext1card[min].value);
    strcpy(ext1card[min].value,str);
  }
  for(i=0;i<n;i++){
    if(i==n-1){
 printf("%s",ext1card[i].value);
 break;
    }
    printf("%s ",ext1card[i].value);
  } 
  printf("\n");   
  for(i=0;i<n;i++){ 
    for(j=1;j<n;j++){
      if(strcmp(card[i].value,ext1card[j-1].value)==0&&card[i].value[1]==ext1card[j].value[1]){     
	sn=1;
	break;	
      }
      else if(strcmp(card[i].value,ext1card[n-1].value)==0&&card[i].value[1]==ext1card[j].value[1]){
	sn=1;
	break;
      }
    }
    if(sn==1)break;   
  }
  if(j==n) printf("Not stable\n");
  else printf("Stable\n");
  return 0;
}

