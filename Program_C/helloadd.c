#include <helloadd.h>

int main(void)
{
	int result;
	// call function in another file
	myPrintHelloMake();
	result = add(2,3);
	return 0;
}
