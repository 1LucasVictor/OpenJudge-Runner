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
                    for(int j=i;j<l;j++){
                        S[j]=S[j+2];
                    }
                    chan++;
                    l--;l--;
                    break;
                }
            }
            
            if(chan==0)break;
        }
        
        
        printf("%d\n",il-l);
        
    }