#include <stdio.h>
#include <string.h>

int main(void)
{

        char S[100000];

        int i,j=0,n;

        scanf("%s",&S);

        n=strlen(S);

        for(i=0;i<n;i++){
                if( ((S[i]=='0' && S[i+1]=='1') ||(S[i]=='1' && S[i+1]=='0'))&&n>2 ){
                        j+=2;

                        while(S[i+2]!='\0'){
                                S[i]=S[i+2];
                                i++;
                        }
                        S[i]='\0';

                        i=0;
                        n=strlen(S);
                }       
                else if(n<=2){
                        if((S[0]=='0' && S[1]=='1') ||(S[0]=='1' && S[1]=='0'))j+=2;
                }
        }

        printf("%d\n",j);

        return 0;
        
}
