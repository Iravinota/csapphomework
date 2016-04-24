/*************************************************************************
    > File Name: 2_80.c
    > Author: Eric
    > Desc: 位模式 
    > Created Time: Sat 23 Apr 2016 10:39:51 PM EDT
 ************************************************************************/

#include<stdio.h>

/**
 * 1^(w-n)0^n
 */
int modeA(int n)
{
	return (~0) << n;
}

/**
 * 0^(w-m-n) * 1^n * 0^m
int modeB(int m, int n)
{
	return (~modeA(n))<<m;
}

int main()
{
	printf("%x\n", modeA(4));
	printf("%x\n", modeB(2, 3));
	return 0;
}
