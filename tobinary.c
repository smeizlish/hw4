#include "getnum.h"

long num;
long converted;

long bin(long x){
  int i = sizeof(x)*CHAR_BIT;
  
  while (i > 0) {
        --i;
        converted *= 10;
        converted |=  (x >>i)&1;
  }
  return x;
}

int main( void ){
    while (ch != EOF)
    {
	num = bin(getnum());
	if (neg=='1'){
	    printf("-%ld\n", num);
	}
	else{
	    printf("%ld\n", num);
	}
	ch = getchar();
    }
}

}
