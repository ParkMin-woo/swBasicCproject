/*
 * multiplicationTable.c
 *
 *  Created on: 2021. 2. 7.
 *      Author: Administrator
 */


#include <stdio.h>

int main(void)
{
	printf("[������ ǥ]\n");

	for(int i = 1 ; i <= 9 ; i++) {
		for(int j = 1 ; j <= 9 ; j++) {
			printf("%d * %d = %d\n" , i , j , i*j);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
