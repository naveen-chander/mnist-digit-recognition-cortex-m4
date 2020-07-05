#include "my_header.h"

#include "weights1_pca.h"
#include "weights2_pca.h"
#include "weights3_pca.h"

void ann(my_num* input, my_num* output)
{
	static my_num int1[n2];
	my_num int1_op[n2];
	static my_num int2[n3];
	my_num int2_op[n3];

	static my_num sum1 = 0;
	static my_num sum2 = 0;
	static my_num sum3 = 0;

	//static my_num s1 ,s2,s3;
	static my_num int1_r, int2_r,int3_r; //to store intermediate results of 1st 2nd 3rd mat mul
	int i,j,k;
	static my_num int1_rr,int2_rr,int3_rr;

//first layer mat multiplication
//	for(i = 0;i<1;i++)
//			{
				for(j = 0;j<n2;j++)
				{

					for(k=0;k<n1;k++)
					{
						my_mult(input[k],weights1[k][j],&int1_r);
						sum1 = sum1 + int1_r;
					}
					int1[j] = sum1;
					sum1 = 0;
				}
//			}
//first layer relu

	for(i = 0;i<n2;i++)
	{
		relu(int1[i],&int1_rr);
		int1_op[i]=int1_rr;
	}

//second layer mat multiplication

//	for(i = 0;i<1;i++)
//			{
				for(j = 0;j<n3;j++)
				{

					for(k=0;k<n2;k++)
					{
//#pragma HLS ARRAY_PARTITION variable=weights2 cyclic factor=2 dim=1
						my_mult(int1_op[k],weights2[k][j],&int2_r);
						sum2 = sum2 + int2_r;
					}
					int2[j] = sum2;
					sum2 = 0;
				}
//			}
//second layer relu

		for(i=0;i<n3;i++)
		{
			relu(int2[i],&int2_rr);
			int2_op[i]=int2_rr;
		}
//third layer mat multiplication

//			for(i = 0;i<1;i++)
//					{
						for(j = 0;j<n4;j++)
						{

							for(k=0;k<n3;k++)
							{
//#pragma HLS ARRAY_PARTITION variable=weights3 cyclic factor=2 dim=1
								my_mult(int2_op[k],weights3[k][j],&int3_r);
								sum3 = sum3 + int3_r;
							}
							output[j] = sum3;
							sum3 = 0;
						}
//					}
}
