#include <stdio.h>

int main()
{   
    int a,b;
    int fig[200];
    int resul;
    int cnt = 1;
    int i = 0;
    int count = 0;
    char str[1000000];
    
    while(fgets(str,sizeof(str),stdin) != NULL){
    
        sscanf(str,"%d%d",&a,&b);
        
        resul = a+b;
        
        if(resul>0){
            while(resul){
                resul/=10;
                fig[i]=cnt++;
            }
            cnt = 1;
            i++;
            count++;
        }
        else{
            fig[i]=0;
            i++;
            count++;
        }
    }
    
    for(i=0;i<count;i++){
        printf("%d\n",fig[i]);
    }
    
    return 0;
}