#include <stdio.h>
#include <string.h>
void shuffle(int ,char *);

void shuffle(int n, char *c){
  int i,s,len=strlen(c);
  char dummy[402]={};
  //printf("%d %d\n",len,n);
  strcpy(dummy,c);
  if( n > len ) s = n % len;
  else s = n;
  strncat(dummy,c,s);
  for(i=0;i<len;i++){
    c[i] = dummy[s+i];
  }
  while(i!=202){
    c[i]=NULL;
    i++;
  }
}

int main(){
  int i,sh,h,hsum=0;
  char card[201]={};
  
  while( scanf("%s",card)!=EOF ){
    if( strcmp(card,"-")==0 ) break;
    scanf("%d",&sh);
    for(i=0;i<sh;i++){
      scanf("%d",&h);
      hsum+=h;
    }
    if( hsum!=strlen(card) || hsum%strlen(card)!=0 ) shuffle(hsum,card);
    puts(card);
    hsum=0;
  }
  return 0;
}