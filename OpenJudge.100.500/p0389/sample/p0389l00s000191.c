#include <stdio.h>
#include <string.h>


int main(){
    char str[200];
    char cpy[200];
  
    
    
    while(1)
    {
          int m,i,j,mc=0;
        scanf("%s%d",str,&m);
        if(strcmp(str,"-")==0)
            break;
        
        while(mc<m){
            int h; scanf("%d",&h);
            for(i=0;i<h;i++)
               cpy[i]=str[i];
            for(j=0;j<strlen(str)-h;j++)
               str[j]=str[h+j];
            for(i=0;i<h;i++)
               str[strlen(str)-h+i]=cpy[i];
            mc++;
        }
        
    printf("%s\n",str);
        
    }
    
    
    
    
    
    return 0;
}
