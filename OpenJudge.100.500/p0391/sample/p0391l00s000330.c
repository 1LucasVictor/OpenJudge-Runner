#include <stdio.h>
#include <string.h>
int main(){
char str[1001],mei[10],q[1001],abc[1001];
int kazu,a,b,j,i,ba,k,l;



scanf("%s",str);
scanf("%d",&kazu);



for(i=0;i<kazu;i++){
scanf("%s %d %d",mei,&a,&b);


    if(mei[2]=='p'){
        scanf("%s",q);
        for(k=0;k<(b-a+1);k++){
            str[a+k]=q[k];}
        }





    if(mei[2]=='v'){
        ba=strlen(str);
            strncpy(abc,str,ba);
            for(j=0;j<=b-a;j++){
            str[j+a]=abc[b-j];}
}


if(mei[0]=='p'){
    for(l=a;l<=b;l++){
        printf("%c",str[l]);
        }
        puts("");
        }
        





}

return 0;
}