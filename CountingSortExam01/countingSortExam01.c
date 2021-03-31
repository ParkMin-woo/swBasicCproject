/*
 * countingSortExam01.c
 *
 *  Created on: 2021. 3. 10.
 *      Author: Administrator
 */
// 계수 정렬 예시

#include <stdio.h>
#define MAX_VALUE 10001

int n, m;
int a[MAX_VALUE];

int main(void) {
	scanf("%d" , &n);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d" , &m);
		a[m]++;
	}
	for(int i = 0 ; i < MAX_VALUE ; i++) {
		while(a[i] != 0) {
			// printf("%d " , a[i]);
			// i--;
			printf("%d " , i);
			a[i]--;
		}
	}
	system("pause");
	return 0;
}
