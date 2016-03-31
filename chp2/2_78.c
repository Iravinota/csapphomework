/*************************************************************************
    > File Name: 2_78.c
    > Author: Eric
    > Desc: x*5/8，/8可以使用2_77的divide_power2函数 
    > Created Time: Thu 31 Mar 2016 10:50:37 AM EDT
 ************************************************************************/

#include<stdio.h>

int mul5dev8(int x)
{
	int y = (x << 2) + x;
	return divide_power2(y, 3);
}
