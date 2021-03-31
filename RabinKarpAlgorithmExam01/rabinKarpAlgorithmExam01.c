/*
 * rabinKarpAlgorithmExam01.c
 *
 *  Created on: 2021. 3. 31.
 *      Author: Administrator
 */
// 라빈 카프 문자열 매칭 예제

// 1) 라빈 카프 문자열 매칭 : 문자열 선언 및 확인 함수 구현하기
#include <stdio.h>
#include <string.h>

char *parent = "acabacdabac";
char *pattern = "abacdab";

void check(char *parent , char *pattern , int start) {
	int found = 1;
	int patternSize = strlen(pattern);
	for(int i = 0 ; i < patternSize ; i++) {
		if(parent[start + i] != pattern[i]) {
			found = 0;
			break;
		}
	}
	if(found) {
		printf("[인덱스 %d에서 매칭 발생]\n" , start + 1);
	}
}

// 2) 라빈 카프 문자열 매칭 : 라빈 카프 알고리즘 구현하기
void rabinKarp(char *parent , char *pattern) {
	int parentSize = strlen(parent);
	int patternSize = strlen(pattern);
	int parentHash = 0 , patternHash = 0 , power = 1;
	for(int i = 0 ; i < parentSize - patternSize ; i++) {
		if(i == 0) {
			for(int j = 0 ; j < patternSize ; j++) {
				parentHash = parentHash + parent[patternSize - 1 - j] * power;
				patternHash = patternHash + pattern[patternSize -1 -j] * power;
				if(j < patternSize - 1) power = power * 2;
			}
		}
		else {
			parentHash = 2 * (parentHash - parent[i - 1] * power) + parent[patternSize - 1 + i];
		}
		if(parentHash == patternHash) {
			check(parent, pattern , i);
		}
	}
}

// 3) 라빈 카프 문자열 매칭 : 라빈 카프 알고리즘 사용해보기
int main(void) {
	rabinKarp(parent , pattern);
	system("pause");
	return 0;
}
