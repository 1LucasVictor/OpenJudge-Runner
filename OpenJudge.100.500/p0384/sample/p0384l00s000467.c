
#include <stdio.h>
#include <ctype.h>

int main(){

    int i,j;
    char moji[1201],ch;
    i=0; 
    
     while(1){
		 scanf("%c",&ch);
         moji[i]=ch;
         if(ch=='\n') break;
	  ++i;
	 }
	    
    for (j=0;j<i;j++){
		if (islower(moji[j])){
			moji[j]=toupper(moji[j]);
		}else if(isupper(moji[j])){
			moji[j]=tolower(moji[j]);
	    }
	}
	 
	 for(j=0;j<i;j++){
	  printf("%c",moji[j]);
     }
      printf("\n");
	  
    
	return 0;
}