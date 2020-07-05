#include "my_header.h"

void relu(my_num a,my_num *b)
{
	if(a<=0)
	{
		*b = 0;
	}
	else
	{
		*b = a;
	}
}
