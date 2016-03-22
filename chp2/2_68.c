/*************************************************************************
    > File Name: 2_68.c
    > Author: Eric
    > Desc: 最高位右侧全为1 
    > Created Time: Tue 22 Mar 2016 10:41:16 AM EDT
 ************************************************************************/

#include<stdio.h>

int lower_bits(int x, int n) 
{
	return (((1 << (n - 1)) - 1) << 1) | 1;
}

int main()
{
	int i = 0;
	for (i = 1; i < 33; i++) {
		printf("%x\n", lower_bits(0, i));
	}
	return 0;
}
