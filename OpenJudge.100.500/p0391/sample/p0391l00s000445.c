void print(char* s,int a, int b);
void reverse(char* s,int a,int b);
void replace(char* s,int a,int b,char *p);

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[1000];
    scanf("%s",str);
    
    int q;
    scanf("%d",&q);
    
    int i;
    for(i=0;i<q;i++){
        char op[10];
        scanf("%s",op);
        int a,b;
        scanf("%d %d",&a,&b);
        if(strcmp(op, "print") == 0){
            print(str, a, b);
        }
        else if(strcmp(op, "reverse") == 0){
            reverse(str, a, b);
        }
        else if(strcmp(op, "replace") == 0){
            char q[b-a+1];
            scanf("%s",q);
            replace(str, a, b, q);
        }
    }
    
    return 0;
}

void print(char* s,int a, int b){
    char tmp[1000] = {};
    strncpy(tmp, s+a, b-a+1);
    printf("%s\n",tmp);
}

void reverse(char* s,int a,int b){
    char tmp[b-a+1];
    strncpy(tmp, s+a, b-a+1);
    
    int i;
    for(i=a;i<=b;i++){
        s[i] = tmp[b-i];
    }
}

void replace(char* s,int a,int b,char *p){
    int i;
    for(i=a;i<=b;i++){
        s[i] = p[i-a];
    }
}