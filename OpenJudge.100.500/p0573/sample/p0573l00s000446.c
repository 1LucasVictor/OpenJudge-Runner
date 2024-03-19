#include <stdio.h>
int main(void){
    // Your code here!
    char n[8];
    scanf("%s",n);
   int lsee=0;
   
    int i,j;
   
    for(i=0;i<4;i++){
        for (j=0;j<4;j++){
        
            if(n[i]==n[j]){
                lsee++;
                
            }
            //printf("%d\n",lsee);
           
            
        }
        
        
    }
    if(lsee==8){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return (0);
}