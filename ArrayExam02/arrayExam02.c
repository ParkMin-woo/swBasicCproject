/*
 * arrayExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// �迭�� ���� �߿��� �ִ� ã��01

#include <stdio.h>

int main(void) {
	int a[10] = {6 , 10, 10, 5, 2, 11, 16, 20, 19, 1};

	for(int i = 0 ; i < 10 ; i++) {
		/*
		int temp;	// �迭�� ���ҵ��� �ű�� ���� temp ������ �����.
		if(a[i] < a[i+1]) {
			printf("�ű� �ʿ䰡 �����ϴ�.\n");
		}
		else {
			printf("�Űܾ� �մϴ�\n");
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

	printf("[���� �迭��]\n");
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d\n" , a[i]);
	}
	printf("[MAX��] => %d\n" , a[9]);
	system("pause");
	return 0;
}
