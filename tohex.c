#include "getnum.h"

signed long num;
int ch;

int main( void ){
    extern char negative;
    num = getnum();
    printf("%lx\n",num);
    if (negative == '1'){
	printf("-0x%lx\n", num);
    }
    else{
	printf("0x%lx\n", num);
    }
    ch = getchar();
    while (ch != EOF){
	if (isspace(ch)){
	    while (isspace(ch)){
		ch = getchar();
		printf("%d",ch);
		    }
		}
	printf("%s", "test");
	num = getnum();
	//if statement for negative flag??
	if (negative=='1'){
	    printf("-0x%lx\n", num);
	}
	else{
	    printf("0x%lx\n", num);
	}

    }
}

