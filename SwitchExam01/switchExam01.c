#include <stdio.h>

int main(void)
{
	printf("������ �Է��ϼ���.");
	fflush(stdout);
	char grade;
	scanf("%c\n" , &grade);
	switch(grade) {
	case 'A' :
		printf("A�����Դϴ�.\n"); break;
	case 'B' :
		printf("B�����Դϴ�.\n"); break;
	case 'C' :
		printf("C�����Դϴ�.\n"); break;
	default :
		printf("������ �ٽ� �Է��ϼ���.\n");
	}
	system("pause");
	return 0;
}
