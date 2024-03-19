#include <stdio.h>

int main(void){

        long int a,b,c,d,n;
        int judge = 0;
        char s[200000];
    
        scanf("%ld%ld%ld%ld%ld",&n,&a,&b,&c,&d);
        scanf("%s",s);

        //if(s[a-1] == '.' && s[b-1] == '.' && s[c-1] == '.' && s[d-1] == '.'){//abcdについて   
                if(c>d){//どこかでaがbを跨がなければならない//bとdの間に...がないとできない
                        for(int i=b-1;i<d;i++){
                                if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                                        judge = 2;
                                }   
                        }   
                }else{
                        judge = 2;
                }   
        //} 


if(d>c){
        for(int i=a;i<d;i++){
                if(s[i] == '#' && s[i+1] == '#'){
                        judge = 1;
                }   
        }   
}else{
        for(int i=a;i<c;i++){
                if(s[i] == '#' && s[i+1] == '#'){
                        judge = 1;
                }   
        }   
}
    
        if(judge == 2){ 
                printf("Yes\n");
        }else{
                printf("No\n");
        }   
return 0;
}
