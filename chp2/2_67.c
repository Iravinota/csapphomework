/*************************************************************************
    > File Name: 2_67.c
    > Author: Eric
    > Desc: 判断是否是32位机器 
    > Created Time: Mon 21 Mar 2016 09:50:05 AM EDT
 ************************************************************************/

#include<stdio.h>

/*当int为32位时返回0，否则返回1。机器最少32位可执行*/
int least32_int_size_is_32()
{
	return !(((1 << 31) >> 31) + 1);
}

/*机器最少16位可执行*/
int least16_int_size_is_32()
{
	int x = 1;
	x |= x << 1;
	x |= x << 2;
	x |= x << 4;
	x |= x << 8;
	int y = x << 15;
	y = y << 1;
	int is_gt32 = x & y;	// 当>=32位时，此值为0
	int is_lt32 = (x | y) + 1;	// 当<=32位时，此值为0，否则不为0
	printf("%x, %x\n", is_gt32, is_lt32);
	return !is_gt32 && !is_lt32;
}

int bad_int_size_is_32() 
{
	/* Set most significant bit (msb) of 32-bit machine */
	int set_msb = 1 << 31;
	/* Shift past msb of 32-bit word */
	// int beyond_msb = 1 << 32;

	/* set_msb is nonzero when word size >= 32
	 * beyond_msb is zero when word size <= 32 */
	// return set_msb && !beyond_msb;
}

int main()
{
	/*
	unsigned x = 9;
	x >> 40;
	printf("%d\n", x); */
	printf("%d %d\n", least32_int_size_is_32(), least16_int_size_is_32());
	return 0;
}
