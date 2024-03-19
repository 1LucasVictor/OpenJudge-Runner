int main(void){
    char ch='0';
    
    while(1){
        
        ch = getchar();
        if('a' <= ch && ch <= 'z'){
            putchar(ch-32);
        }else if('A' <= ch && ch <= 'Z'){
            putchar(ch+32);
        }else{
            putchar(ch);
        }
        if(ch == '\n'){
            break;
        }
    }
}
