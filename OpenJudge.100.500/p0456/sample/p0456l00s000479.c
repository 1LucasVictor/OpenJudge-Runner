int main(void){
    char s[200000];
    char t[200000];
    
    int i, j;
    i = 0;
    j = 0;
    
    scanf("%s", s);
    scanf("%s", t);
    
    while (s[i] != '\0'){
            if(s[i] != t[i]){
                s[i] = t[i];
                j++;
            }
            i++;
    }
    printf("%d\n", j);
    
    return 0;
}