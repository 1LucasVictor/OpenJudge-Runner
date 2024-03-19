#include <stdio.h>

int main(void){

	int W,H,x,y,r;
	
	scanf ("%d %d %d %d %d",&W,&H,&x,&y,&r);
	
	int yokohabaminus,yokohabaplus;
	
	yokohabaminus = x - r;
	
	yokohabaplus = x + r;
	
	int tatehabaminus,tatehabaplus;
	
	tatehabaminus = y - r;
	
	tatehabaplus = y + r;
	
	if(yokohabaminus >= 0 && yokohabaplus <= W && tatehabaminus >= 0 && tatehabaplus <=H){
	
		printf ("Yes\n");
	 
	}else{
		
		printf ("No\n");
		
	}
	
	return 0;
	
}
		
	  
