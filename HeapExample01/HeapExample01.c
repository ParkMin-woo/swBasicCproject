/*
 * HeapExample01.c
 *
 *  Created on: 2021. 1. 31.
 *      Author: Administrator
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *data;
	data = (int *) malloc(sizeof(int));
	*data = 1;
	printf("%d\n" , *data);
	return 0;
}
