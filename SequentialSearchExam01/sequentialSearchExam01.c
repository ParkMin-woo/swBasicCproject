/*
 * sequentialSearchExam01.c
 *
 *  Created on: 2021. 3. 13.
 *      Author: Administrator
 */
// ���� Ž�� ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 1000

char **array;
int founded;

int main(void) {
	int n;
	char *word;
	word = malloc(sizeof(char) * LENGTH);
	scanf("%d %s" , &n, word);
	array = (char **)malloc(sizeof(char *) * n);
	for(int i = 0; i < n ; i++) {
		array[i] = malloc(sizeof(char) * LENGTH);
		scanf("%s" , array[i]);
	}

	for(int i = 0 ; i < n ; i++) {
		if(!strcmp(array[i] , word)) {
			printf("%d��° �����Դϴ�.\n" , i+1);
			founded = 1;
		}
	}
	if(!founded) printf("���Ҹ� ã�� �� �����ϴ�.\n");
	system("pause");
	return 0;
}
