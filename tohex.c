#include "getnum.h"

long num;

int main( void ){
    num = getnum();
    printf("0x%x", num);
}
