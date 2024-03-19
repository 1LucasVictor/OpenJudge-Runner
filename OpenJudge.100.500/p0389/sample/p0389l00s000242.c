#include <stdio.h>
#include<string.h>

int main(void)
{
    int i,j,k,n,s;
    char a[201],b[201];
    
    while(1){
        scanf("%s\n%d",a,&n);
        if(!strcmp(a,"-")) break;
        
        for(i=0;i<n;i++){
            scanf("%d",&s);
            for(j=s;a[j]!='\0';j++)
                b[j-s]=a[j];
            for(k=0;k<s;k++)
                b[j-s+k]=a[k];
            
            for(j=0;a[j]!='\0';j++)
                a[j]=b[j];
    }
    printf("%s\n",a);
    }
    return 0;
}

