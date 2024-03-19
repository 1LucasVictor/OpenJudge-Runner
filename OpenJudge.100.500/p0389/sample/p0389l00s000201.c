#include <stdio.h>
#include <string.h>
int main(void)
{
 int i,m,j,k,h;
 char alpha[250],xx[250];
 
 while(1){
 scanf("%s",alpha);
 if(alpha[0]=='-')break;
 
    j=strlen(alpha);
    scanf("%d",&m);
    for(k=0;k<m;k++){
        scanf("%d",&h);
        strncpy(xx,alpha,h);
        xx[h]='\0';             //strncpyの後にはヌル文字を代入しないと謎の文字が入る
        for(i=0;i<j;i++){
            alpha[i]=alpha[i+h];
            if(i>=j-h)alpha[i]='\0';
        }
        strcat(alpha,xx);
    }
    printf("%s\n",alpha);
 }
 return 0;
}
