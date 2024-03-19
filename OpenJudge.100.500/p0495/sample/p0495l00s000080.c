int main() {
    // insert code here...
    char S[3];
    int a=0;
    int b=0;
    scanf("%c%c%c", &S[0], &S[1], &S[2]);
    
    for(int i=0; i<3; i++){
        if(S[i]=='A'){
            a=a+1;
        }
        else
            b=b+1;
    }
    if(a==3 || b==3){
        printf("No\n");
    }
    else
        printf("Yes\n");
    
    return 0;

}