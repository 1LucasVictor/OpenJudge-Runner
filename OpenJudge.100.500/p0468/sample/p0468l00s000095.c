int main(){
    
    char s[50];
    
    scanf("%s",s);
    getchar();    
    if ("%s",s[1] == 'B'){
        s[1]=s[1]+16;
    }
    else if("%s",s[1] == 'R'){
        s[1]=s[1]-16;
    }
    printf("%s",s);
    
    return 0;
}