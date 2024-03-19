#include<stdio.h>
//#include<string.h>
int main()
{
    char S[200000],T[200000];
    scanf("%s %s",&S,&T);
    int i,p=0,length1,length2,j;
    length1=strlen(S);
    length2=strlen(T);
    for(i=0;i<length1;i++){
            if(S[i]!=T[i]){
                p++;

            }

            
            }
            


      printf("%d\n",p);





    return 0;
}
