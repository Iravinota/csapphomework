/*************************************************************************
    > File Name: 2_66.c
    > Author: Eric
    > Desc: 找出最左侧的1 
    > Created Time: Sun 20 Mar 2016 10:30:53 AM EDT
 ************************************************************************/

#include<stdio.h>

/*把第一个1之后右侧所有的位变为1*/
unsigned change_raones(unsigned x)
{
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	return x;
}

int leftmost_one(unsigned x)
{
	x = change_raones(x);
	return x - (x >> 1);
}

int main()
{
	printf("%x\n", leftmost_one(0x81242334));
	printf("%x\n", leftmost_one(0x51242334));
	printf("%x\n", leftmost_one(0));
}
