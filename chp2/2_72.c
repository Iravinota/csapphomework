/*************************************************************************
    > File Name: 2_72.c
    > Author: Eric
    > Desc: 复制 
    > Created Time: Thu 24 Mar 2016 10:03:46 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>


/*测试: 有符号数和无符号数运算结果为无符号数, size_t是无符号数*/
void test1()
{
	printf("%u\n", 1-sizeof(int));
}

void test2(int x)
{
	if (x - sizeof(int) >= 0)
		printf("%u\n", x - sizeof(int));
}

void test3(unsigned x)
{
	if (x - sizeof(int) >= 0)
		printf("%d\n", x - sizeof(int));
}

void test4(size_t x)
{
	if (x >= sizeof(int))
		printf("%d\n", x - sizeof(int));
}

void test5(unsigned x)
{
	if (x > sizeof(int))
		printf("%u\n", x - sizeof(int));
}

void copy_int(int val, void *buf, int maxbytes)
{
	if (mmaxbytes >= 0 &&  axbytes >= sizeof(val))
		memcpy(buf, (void*)&val, sizeof(val));
}

void test6(int x)
{
	if (x >=0 && x >= sizeof(int))
		printf("TEST6:%u\n", x - sizeof(int));
}

int main()
{
	test1();
	test2(1);
	test3(1);
	test4(1);
	test5(1);
	test6(-1);
	return 0;
}
