#include "my_header.h"

void my_mult(my_num a,weight_index i,my_num *c)
{
	my_num d;
	my_num d1;
	if(i==7)
	{
		*c = 0;
	}
	else if(i<7)
	{
		*c = (a>>i);
	}
	else
	{
		d = (a>>(i-8));
		compliment_2(d,&d1);
		*c = d1;
	}
}
