#include <stdio.h>
#include <string.h>
void replace(char *str, int a, int b, char *obj){
    for(int i=a;i<=b;i++){str[i]=obj[i-a];}
}
void reverse(char *str, int a, int b){
    int buf;
    for(int i=a;i<=(b-a)/2;i++){buf=str[i];str[i]=str[-i+a+b];str[-i+a+b]=buf;}
}
int main(void){
    char go[9],str[1001],str_r[1001],res[100][1001];
    int q,a,b,j=0,k,i;
    scanf("%s",str);
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%s %d %d",go,&a,&b);
        if (strcmp(go,"replace")==0){scanf("%s",str_r);replace(str,a,b,str_r);}
        else if (strcmp(go,"reverse")==0){reverse(str,a,b);}
        else if (strcmp(go,"print")==0){
            for(k=a;k<=b;k++){res[j][k-a]=str[k];}
            j++;
        } 
    }
    for(i=0;i<j;i++) printf("%s\n",res[i]);
    return 0;
}

