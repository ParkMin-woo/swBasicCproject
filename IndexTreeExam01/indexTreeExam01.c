/*
 * indexTreeExam01.c
 *
 *  Created on: 2021. 3. 31.
 *      Author: Administrator
 */
// �ε��� Ʈ���� �κ� �� ���ϱ� ����

// 1) �ε��� Ʈ�� : 1���� N������ ���� �� ���ϱ�
#include <stdio.h>
#define NUMBER 7

int tree[NUMBER];

int sum(int i) {
	int res = 0;
	while(i > 0) {
		res += tree[i];
		// ������ ��Ʈ��ŭ ���鼭 ������ �̵�
		i -= (i & -i);
	}
	return res;
}

// 2) �ε��� Ʈ�� : Ư�� �ε��� �����ϱ�
void update(int i , int dif) {
	while(i <= NUMBER) {
		tree[i] += dif;
		// ������ ��Ʈ��ŭ ���ϸ鼭 �ڷ� �̵�
		i += (i & -i);
	}
}

// 4) �ε��� Ʈ�� : ���� �� ��� �Լ� �����ϱ�
int getSection(int start , int end) {
	return sum(end) - sum(start - 1);
}

// 5) �ε��� Ʈ�� ����غ���
int main(void) {
	update(1 , 7);
	update(2 , 1);
	update(3 , 9);
	update(4 , 5);
	update(5 , 6);
	update(6 , 4);
	update(7 , 1);
	printf("1���� 7������ ���� �� : %d\n" , getSection(1 , 7));
	printf("�ε��� 6�� ���Ҹ� +3��ŭ ����\n");
	update(6 , 3);
	printf("4���� 7������ ���� �� : %d\n" , getSection(4 , 7));
	system("pause");
	return 0;
}
