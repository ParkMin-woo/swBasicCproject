/*
 * graphExam01.c
 *
 *  Created on: 2021. 3. 13.
 *      Author: Administrator
 */
// 무방향 비가중치 그래프 예제

#include <stdio.h>

int a[1001][1001];
// n : 노드(정점)의 갯수
// m : 간선의 갯수
int n, m;

int main(void) {
	scanf("%d %d" , &n, &m);
	for(int i = 0 ; i < m ; i++) {
		int x, y;
		scanf("%d %d" , &x, &y);
		a[x][y] = 1;
		a[y][x] = 1;
	}
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= n ; j++) {
			printf("%d " , a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
