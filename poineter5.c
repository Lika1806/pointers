#include <stdio.h>
int main()
{
	int a=44;
	int b=56;
	int* pa=&a;
	int* pb=&b;
	*pa+=*pb;
	*pa-=10;
	printf(" a = %d\n b = %d\n", *pa, *pb);
	
	return 0;
}
