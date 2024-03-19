#include<stdio.h>
int main(){
  
  int stack[200],i=0,j=0,k=0,num[10],n=0,max=0,calStack;
   char c;
   
   for(i=0;i<200;i++){
     stack[i]=0;
   }
   i=0;
   while(1){
     
     c = getchar(); 
     
     if(c>='0' && c<='9'){
       num[i] = c - 48;
        i++;
	//  printf("%d\n",i);
     }
     else if(c == ' '){
      
       if(i > 1){
	 
       for(j = 0; j < i-1; j++){
	 n = num[j]*10;
	 for(k=i-j-2;k > 0 ;k--){

	   n = n*10;
	   //  printf("%d\n",n);
	 }// printf("%d\n",n);
	 stack[max]+=n;
	 
       }
       }
       stack[max]+=num[i-1];
       // printf("%d\n",stack[max]);
       //  printf("%d\n",stack[max]);   
       i=0;
       max++;
     }
     else if (c == '+'){
       calStack = stack[max - 2] + stack[max - 1];
       stack[max-1]=0;
       stack[max-2]=calStack;
       max--;
     }
     
     else if (c == '-'){
       calStack = stack[max - 2] - stack[max - 1];
       stack[max-1]=0;
       stack[max-2]=calStack;
       max--;
     }
     
     else if (c == '*'){
       calStack = stack[max - 2] * stack[max - 1];
       stack[max-1]=0;
       stack[max-2]=calStack;
       max--;
    }
     else if(c=='\n'){
       break;
     }

   }
      printf("%d\n",stack[max-1]);
    
     
   return 0;
 
     
}