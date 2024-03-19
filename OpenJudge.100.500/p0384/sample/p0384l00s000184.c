#include<stdio.h>
int main(){
    
    char a[1205];
    
    scanf("%[^\n]",a);
    
    int p=0;
    
    while(a[p]!='\0'){
        p++;
    }
    
    for(int i=0;i<p;i++){
        if(a[i]>='a'&&a[i]<='z')
        {a[i]=a[i]-32;
    }
    
        else if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
    }
        
    }
    printf("%s",a);
    printf("\n");
    
    return(0);
    
}
