    #include<stdio.h>
    #include<string.h>
    int main(void){
    int A,B,C,D,E,N,M,x,y,i,j,cou=0,cou2,v[1000000],w[1000000],min_i,en=0;
        char S[100],W[100],s[10],X,Y;
       scanf("%s%s%s",&S);
       if(S[0]=='1'){
           cou++;
       }
       if(S[1]=='1'){
           cou++;
       }
       if(S[2]=='1'){
           cou++;
       }
       printf("%d",cou);
       return 0;
    }