#include <stdio.h>
#include <string.h>

int main(){
  int n , i , j , f= 0;
  char input1[12] , input2[12];
  scanf ( "%d\n" , &n);
  char adic[n][12],cdic[n][12],gdic[n][12],tdic[n][12];
  int adc = 0,cdc = 0,gdc =0,tdc=0;
  for ( i= 0; i< n ; i++){
    scanf("%s %s\n" , input1 ,input2);
    if ( strcmp(input1,"insert") == 0 ){ 
	if(input2[0] == 'A'){strcpy(adic[adc], input2);adc++;}
	if(input2[0] == 'C'){strcpy(cdic[cdc], input2);cdc++;}
	if(input2[0] == 'G'){strcpy(gdic[gdc], input2);gdc++;}
	if(input2[0] == 'T'){strcpy(tdic[tdc], input2);tdc++;}
	}
    else if ( strcmp(input1,"find") == 0 ){
	  f =0;
	  if(input2[0] == 'A'){
      for ( j = 0 ; j  <= adc; j++){
	    if ( strcmp(input2, adic[j]) == 0 ){f = 1;break;}
      }
	  }
	   if(input2[0] == 'C'){
      for ( j = 0 ; j  <= cdc; j++){
	    if ( strcmp(input2, cdic[j]) == 0 ){f = 1;break;}
      }
	  }
	   if(input2[0] == 'G'){
      for ( j = 0 ; j  <= gdc; j++){
	    if ( strcmp(input2, gdic[j]) == 0 ){f = 1;break;}
      }
	  }
	   if(input2[0] == 'T'){
      for ( j = 0 ; j  <= tdc; j++){
	    if ( strcmp(input2, tdic[j]) == 0 ){f = 1;break;}
      }
	  }
      if ( f == 0 ){printf("no\n");}
      else if ( f == 1){printf("yes\n");}
    }
  }
  return 0;
}
