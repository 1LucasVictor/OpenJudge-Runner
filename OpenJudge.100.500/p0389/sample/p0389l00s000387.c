#include <stdio.h>
int main(){
  
  int howtimes,shuffle,lastcard=0,i,j,k;
  char card[300]={};
  
  //scan
  while(1){
    
    scanf("%s",card);
    
    if(card[0] != '-'){
      
      scanf("%d",&howtimes);
      
      for(i = 0; card[i] != '\0'; i++){
	
	lastcard=i+1;
	
      }
      
      for(i = 0; i < howtimes; i++){
	
	scanf("%d",&shuffle);
	
	for(j = 0; j < shuffle; j++){
	  
	  card[lastcard+j]=card[j];
	  
	}
	
	for(j = 0; j < lastcard; j++){
	  
	  card[j]=card[shuffle+j];
	  
	}
	
      }
      
      for(i = 0; i < lastcard; i++){
	
	printf("%c",card[i]);
	
      }
      
      printf("\n");
      
    } else {
      
      break;
      
    }  
    
  }
  
  return 0;
  
}