/*
 * arrayExam08.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [������ �迭�� ������ �迭]
// 3���� �迭 �⺻ ����

#include <stdio.h>

int main(void) {
	int a[2][3][3] = {
			{
					{85 , 97 , 79}
					, {100 , 89 , 98}
					, {95 , 98 , 77}
			}
			, {
					{66 , 95 , 100}
					, {78 , 68 , 89}
					, {99 , 88 , 89}
			}
	};

	for(int i = 0 ; i < 2 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			for(int k = 0 ; k < 3 ; k++) {
				printf("%d " , a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
