#include<stdio.h>
int main(){
    int am; // operand
    scanf("%d",&am);
    char st; // + ,- , / , *  -> //operator
    scanf("%c",&st);
    int ma;//operand
    scanf("%d",&ma);
    // if(st=='+'){
    //     printf("%d",am+ma);
    // }
    // if(st=='-'){
    //     printf("%d",am-ma);
    // }
    // if(st=='/'){
    //     printf("%f",(float)am/ma);
    // }
    // if(st=='*'){
    //     printf("%d",am*ma);
    // }
    switch(st){
        case '+':
            printf("%d",am+ma);
            break;
        case '-':
            printf("%d",am-ma);
            break;
        case '/':
            printf("%f",(float)am/ma);
            break;
        case '*':
            printf("%d",am*ma);
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}