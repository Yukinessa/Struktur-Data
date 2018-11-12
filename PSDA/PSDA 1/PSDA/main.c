#include "header.h"

int main(int argc, char const *argv[])
{
	Stack S;

	createStack(&S);
	Push(&S,5);
	Push(&S,3);
	Push(&S,10);
	Push(&S,7);
	cetakStack(S);


	return 0;
}
