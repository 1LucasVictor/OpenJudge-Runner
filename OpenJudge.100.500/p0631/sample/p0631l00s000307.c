#include<stdio.h>

int main(){
    int con_cat;
    int con_unkn;
    int var_cat;
    
    scanf("%d %d %d",&con_cat,&con_unkn,&var_cat);
    
    if(var_cat>=con_cat && var_cat<=con_cat+con_unkn-1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}