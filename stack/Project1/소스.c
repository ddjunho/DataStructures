#include <stdio.h>

void push();
void pop();

int s[5] = { 0 };
int top = -1;
void main()
{
	int sel, i;
	while (1)
	{
		printf("\n\n top : %d", top);
		printf("\n\n stack [");
		for (i = 0; i <= top; i++)
			printf("%5d", s[i]);
		printf("]\n\n");
		printf("\n\n[���� ����� �˰���]\n\n");
		printf("1. ���� push()");
		printf("\n\n2. ���� pop()");
		printf("\n\n0. ����\n...............");
		scanf_s("%d", &sel);
		if (sel == 0) break;
		else if (sel == 1) push();
		else if (sel == 2)  pop();
		else printf("\n\n 0~2������ ���ڸ� �Է��ϼ���\n\n");
	}
}
void push() {
	printf("\n\n pop �Լ� ������\n"); 
	int num;
	printf("�Է��� ���� : ");
	scanf_s("%d", &num);
	if (top+1>4) {
		printf("������ ������");
	}
	else
	{
		top++;
		s[top] = num;
	}
}
void pop() {
	printf("\n\n push�Լ� ����\n");
	if (top == -1) printf("������ ������");
	else
	{
		printf("\n\n pop data : %d", s[top]);
		s[top] = 0;
		top--;
		
	}
}