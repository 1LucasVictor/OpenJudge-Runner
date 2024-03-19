#include <stdio.h>
#include <string.h>

int main(void){
        int i,j,n,p1,p2;
        char rep[] = {"replace"}, rev[] = {"reverse"}, pri[] = {"print"};
        char jud[8];
        char m[1001],str[1001];

        scanf("%s\n%d",str,&n);

        for(i = 0; i < n; i++){
                scanf("%s %d %d",jud,&p1,&p2);

                if(strcmp(rep,jud) == 0){
                        scanf("%s",m);

                        for(j = 0; j < strlen(m); j++)
                                str[p1+j] = m[j];

                        //printf("%s\n",str);

                }else if(strcmp(rev,jud) == 0){
                        for(j = 0;j <= p2-p1; j++)
                                m[j] = str[p2-j];

                        for(j = p1; j <= p2; j++){
                                str[j] = m[j-p1];
                        }

                        //printf("%s\n",str);

                }else{

                        for(j = p1; j <= p2; j++)
                                printf("%c",str[j]);
                        puts("");
                }
        }
        return 0;
}
