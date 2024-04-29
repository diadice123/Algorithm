#include <stdio.h>

int main(void){
    int a;
    char b;
    int* p = a;
    scanf("%d", &a);
    scanf("%c", &b);

    printf("%d, %d", a, p);

}