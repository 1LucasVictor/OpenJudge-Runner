#include <stdio.h>

int main(void){

        long int a,b,c,d,n;
        int judge = 0;
        char s[200000];
    
        scanf("%ld%ld%ld%ld%ld",&n,&a,&b,&c,&d);
        scanf("%s",s);

        if(s[a-1] == '.' && s[b-1] == '.' && s[c-1] == '.' && s[d-1] == '.'){//abcdについて     
                if(c>d){//どこかでaがbを跨がなければならない//bとdの間に...がないとできない
                        for(int i=b-1;i<=d-1;i++){
                                if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i] == '.'){
                                        judge = 2;
                                }   
                        }   
                }else{
                        judge = 2;
                }   
        }   



/*      
                if(d>c && s[c-2] == '.' && s[c] == '.'){//cの前後は.
                        judge = 2;
                }else if(c>d && s[d-2] == '.' && s[d] =='.'){
                        judge = 2;
                }
*/


        for(int i=a-1;i<d-1;i++){
                if(s[i] == s[i+1] && s[i] == '#'){
                        judge = 1;
                }   
        }   
    
        if(judge == 2){ 
                printf("Yes\n");
        }else{
                printf("No%d\n",judge);
        }   
return 0;
}
    