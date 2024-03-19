#include <stdio.h>

int main(){

    int i,j,numl[1001],ans;
    char num[1001];
    i=0; 
   
     while(1){
		 scanf("%s",num);
         if (num[0]=='0') break;
         ans=0;
         j=0;
   
          while(1){
			if (num[j]=='\0') break;
			ans+=(int)(num[j]-'0');
	       ++j;
	     }
	     	     
           numl[i]=ans;
	       ++i;
	    }
   
       
     for (j=0;j<i;j++){
	  printf("%d\n",numl[j]);
     }  
    
	return 0;
}