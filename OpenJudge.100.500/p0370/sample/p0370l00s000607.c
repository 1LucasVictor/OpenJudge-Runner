int main(void){
    int a = 0;
    char op;
    int b = 0;
    int c = 0;
    int f = 0;
   
    while (1){
        scanf("%d %c %d", &a, &op, &b);
   
        if (op == '+'){
            c = a + b;
        }
        else if (op == '-'){
            c = a - b;
        }
        else if (op == '*'){
            c = a*b;
        }
        else if (op == '/'){
            c = a / b;
        }
        else{
            break;
        }
        printf("%d\n", c);
    }
    return 0;
}