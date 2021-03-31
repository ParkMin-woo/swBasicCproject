#include <stdio.h>

int main(void)
{
	printf("학점을 입력하세요.");
	fflush(stdout);
	char grade;
	scanf("%c\n" , &grade);
	switch(grade) {
	case 'A' :
		printf("A학점입니다.\n"); break;
	case 'B' :
		printf("B학점입니다.\n"); break;
	case 'C' :
		printf("C학점입니다.\n"); break;
	default :
		printf("학점을 다시 입력하세요.\n");
	}
	system("pause");
	return 0;
}
