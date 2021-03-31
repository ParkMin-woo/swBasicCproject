/*
 * multiplicationTable2.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */


#include <stdio.h>

int main(void)
{
	printf("[구구단 표]\n");

	/*
	for(int i = 1 ; i <= 9 ; i++) {
		for(int j = 1 ; j <= 9 ; j++) {
			printf("%d * %d = %d\n" , i , j , i*j);
		}
		printf("\n");
	}
	*/
	int i = 1;
	while(i <= 9) {
		int j = 1;
		while(j <= 9) {
			printf("%d * %d = %d\n" , i , j , i*j);
			j++;
		}
		i++;
		printf("\n");
	}

	system("pause");
	return 0;
}
