/*************************************************************************
    > File Name: 2_71.c
    > Author: Eric
    > Desc: 提取4B中的有符号数 
    > Created Time: Wed 23 Mar 2016 10:58:34 AM EDT
 ************************************************************************/

#include<stdio.h>

typedef unsigned packed_t;

/* wrong
int xbyte(packed_t word, int bytenum)
{
	int x = (word >> (bytenum << 3)) & 0xFF;
	return ((x & 0x80) << 24) | x;
} */

int xbyte(packed_t word, int bytenum)
{
	int left_shift = (3 - bytenum) << 3;
	return ((int)word) << left_shift >> 24;
}

int main()
{
	printf("%x\n", xbyte(0x11223384, 0));
	return 0;
}
