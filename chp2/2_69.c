/*************************************************************************
    > File Name: 2_69.c
    > Author: Eric
    > Desc: 循环右移 
    > Created Time: Tue 22 Mar 2016 10:56:39 AM EDT
 ************************************************************************/

#include<stdio.h>

static int w = sizeof(int) << 3;

unsigned rotate_right(unsigned x, int n)
{
	unsigned y = (((1 << n) - 1) & x) << (w - n);
	/*
	printf("%x\n", (1 << n) - 1);
	printf("%x\n", ((1 << n) - 1) & x);
	printf("%x\n", w - n);
	printf("%x\n", y);*/
	return y | (x >> n);
}

int main()
{
	printf("%x\n", rotate_right(0x12345678, 4));
	printf("%x\n", rotate_right(0x12345678, 20));
	printf("%x\n", rotate_right(0x12345678, 0));
	return 0;
}
