/*************************************************************************
    > File Name: 2_75.c
    > Author: Eric
    > Desc: x*y的高w位 
    > Created Time: Wed 30 Mar 2016 10:29:09 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>

unsigned unsigned_high_prod(unsigned x, unsigned y)
{
	int x_highest_bit = (x & INT_MIN) == INT_MIN;
	int y_highest_bit = (y & INT_MIN) == INT_MIN;

	int result = signed_high_prod(x, y) + x_highest_bit*y + y_highest_bit*x;
	return result;
}
