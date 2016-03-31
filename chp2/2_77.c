/*************************************************************************
    > File Name: 2_77.c
    > Author: Eric
    > Desc: 除以2^k 
    > Created Time: Thu 31 Mar 2016 10:18:49 AM EDT
 ************************************************************************/

#include<stdio.h>

/*除法应该向0舍入，负数的最高位应为1，负数的低k位全为0时不存在舍入问题*/
int divide_power2(int x, int k)
{
	return (x >> k) + (((x >> ((sizeof(int)<<3) - 1)) & 1) && (((1 << k + 1) - 1) & x));
}

int main()
{
	printf("%d\n", divide_power2(12340, 8));
	printf("%d\n", divide_power2(12340, 1));
	printf("%d\n", divide_power2(-12340, 8));
	printf("%d\n", divide_power2(-12340, 1));
	return 0;
}
