#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of integers you want : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));
    int* p = ptr;
    for(int i=1; i<=n; i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    int* e = p;
    for(int i=1; i<=n; i++){
        printf("%d\n",(*p));
        p++;
    }
    return 0;
}