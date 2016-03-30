/*************************************************************************
    > File Name: 2_74.c
    > Author: Eric
    > Desc: 和2_73算法一样，这里只是把x-y变为x+(-y) 
    > Created Time: Wed 30 Mar 2016 09:40:26 AM EDT
 ************************************************************************/

#include<stdio.h>

static int INT_MIN = 0x80000000;

int tsub_ovf(int x, int y)
{
	if (y == INT_MIN)
		return x >= 0;

	int minus_y = -y;
	int sum = x + minus_y;
	int pos_over = !(x & INT_MIN) && !(minus_y & INT_MIN) && (sum & INT_MIN);
	int neg_over = (x & INT_MIN) && (minus_y & INT_MIN) && !(sum & INT_MIN);
	return pos_over || neg_over;
}

int main()
{
	printf("%d\n", tsub_ovf(0x7fffffff, 0x80000009));
	return 0;
}
