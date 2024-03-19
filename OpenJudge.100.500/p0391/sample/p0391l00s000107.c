#include<stdio.h>
#include<string.h>

int main()
{
    char s[1010],s1[100],s2[1000],s3[1010];
    int n,a,b,i,k,j;
    scanf("%s", s);

    scanf("%d",&n);
    while(n--){
             strcpy(s3,s);
        scanf("%s", s1);
        if(s1[2]=='p'){
            scanf("%d %d",&a,&b);
            scanf("%s",s2);
            k=0;
            for(i=a;i<=b;i++){
               s[i]=s2[k];
               k++;
            }
        }
        else if(s1[2]=='v'){
            scanf("%d %d",&a,&b);
            for(i=a,j=b;i<=b;i++,j--)
                s[i]=s3[j];

        }
       else if(s1[0]='p'){
            scanf("%d %d",&a,&b);
            for(i=a;i<b;i++)
                printf("%c",s[i]);
                printf("%c\n",s[b]);
        }
    }
    return 0;

}

