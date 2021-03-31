/*
 * arrayExam07.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [다차원 배열과 포인터 배열]
// 2차원 배열의 사용 기본 예제
#include <stdio.h>

int main(void) {
	int a[5][3] = {
			{85, 97, 79}
			, {100, 89, 98}
			, {99, 77, 99}
			, {89, 70, 78}
			, {95, 98, 98}
	};
	/*
	printf("%d\n" , sizeof(a));
	printf("%d\n" , sizeof(a[0]));
	printf("%d\n" , sizeof(a[1][0]));
	*/
	// printf("%d\n" , sizeof(a)/sizeof(a[0]));
	// printf("%d\n" , sizeof(a[1])/sizeof(a[1][0]));
	// printf("%d\n" , sizeof(a));
	for(int i = 0 ; i < 5 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			printf("%d " , a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
