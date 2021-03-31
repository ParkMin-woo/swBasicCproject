/*
 * simpleComparisonStringMatchingExam01.c
 *
 *  Created on: 2021. 3. 31.
 *      Author: Administrator
 */
// 단순 비교 문자열 매칭 구현하기

#include <stdio.h>
#include <string.h>

char *parent = "ABCDEFG";
char *pattern = "EF";

int main(void) {
	int parentSize = strlen(parent);
	int patternSize = strlen(pattern);

	for(int i = 0 ; i <= parentSize - patternSize ; i++) {
		int found = 1;
		for(int j = 0 ; j < patternSize ; j++) {
			if(parent[i + j] != pattern[j]) { found = 0; break; }
		}
		if(found) {
			printf("%d번째에서 찾았습니다.\n" , i + 1);
		}
	}

	system("pause");
	return 0;
}
