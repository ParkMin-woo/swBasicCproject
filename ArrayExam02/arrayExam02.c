/*
 * arrayExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 배열의 원소 중에서 최댓값 찾기01

#include <stdio.h>

int main(void) {
	int a[10] = {6 , 10, 10, 5, 2, 11, 16, 20, 19, 1};

	for(int i = 0 ; i < 10 ; i++) {
		/*
		int temp;	// 배열의 원소들을 옮기기 위해 temp 변수를 만든다.
		if(a[i] < a[i+1]) {
			printf("옮길 필요가 없습니다.\n");
		}
		else {
			printf("옮겨야 합니다\n");
			// a[i] = temp;
			temp = a[i+1];
			a[i+1] = a[i];
			a[i] = temp;
		}
		*/
		// int j = i+1;
		for(int j = i+1 ; j < 10 ; j++) {
			int temp;
			if(a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	printf("[최종 배열값]\n");
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d\n" , a[i]);
	}
	printf("[MAX값] => %d\n" , a[9]);
	system("pause");
	return 0;
}
