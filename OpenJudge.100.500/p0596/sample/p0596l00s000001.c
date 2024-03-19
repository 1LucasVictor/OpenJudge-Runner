    #include <stdio.h>
    #include <math.h>
    int main(void){
        // Your code here!
        char S[100000];
        
        scanf("%s",S);
        
        int l=strlen(S);
        int il=l;
        
        while(1){
            int chan=0;
            
            for(int i=l-2;i>=0;i--){
                
                if(S[i]!=S[i+1]){
                    //printf("l=%d,i=%d\n",l,i);
                    for(int j=i;j<l;j++){
                        S[j]=S[j+2];
                    }
                    chan++;
                    l-=2;
                    //printf("p%s\n",S);
                    break;
                }
            }
            
            if(chan==0)break;
        }
        
        
        printf("%d\n",il-l);
        
    }