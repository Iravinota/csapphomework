/*************************************************************************
    > File Name: 2_63.c
    > Author: Eric
    > Desc: 用逻辑右移实现算数右移，用算数右移实现逻辑右移
    > Created Time: Sat 19 Mar 2016 06:14:28 AM EDT
 ************************************************************************/

#include<stdio.h>

/*算数右移：使用逻辑右移实现*/
int sra(int x, int k) {
	int xsrl = (unsigned)x >> k;

}

/*逻辑右移：使用算数右移实现*/
unsigned srl(unsigned x, int k) {
	unsigned xsra = (int)x >> k;

}
