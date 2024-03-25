#include <stdio.h>

int main(void){

    printf("int 자료형의 크기 : %ld바이트\n", sizeof(int));
    printf("float 자료형의 크기 : %ld바이트\n", sizeof(float));
    printf("double 자료형의 크기 : %ld바이트\n", sizeof(double));
    printf("long int 자료형의 크기 : %ld바이트\n", sizeof(long int));
    printf("long long int 자료형의 크기 : %ld바이트\n", sizeof(long long int));
    printf("char 자료형의 크기 : %ld바이트\n", sizeof(char));
    printf("short 자료형의 크기: %ld바이트\n", sizeof(short));
    printf("unsigned int 자료형의 크기 %ld바이트\n", sizeof(unsigned));

    return 0;


}