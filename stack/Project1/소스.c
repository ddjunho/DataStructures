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
		printf("\n\n[스택 입출력 알고리즘]\n\n");
		printf("1. 삽입 push()");
		printf("\n\n2. 삭제 pop()");
		printf("\n\n0. 종료\n...............");
		scanf_s("%d", &sel);
		if (sel == 0) break;
		else if (sel == 1) push();
		else if (sel == 2)  pop();
		else printf("\n\n 0~2사이의 숫자를 입력하세요\n\n");
	}
}
void push() {
	printf("\n\n pop 함수 구ㄹ현\n"); 
	int num;
	printf("입력할 숫자 : ");
	scanf_s("%d", &num);
	if (top+1>4) {
		printf("스택이 가득참");
	}
	else
	{
		top++;
		s[top] = num;
	}
}
void pop() {
	printf("\n\n push함수 구현\n");
	if (top == -1) printf("스택이 공백임");
	else
	{
		printf("\n\n pop data : %d", s[top]);
		s[top] = 0;
		top--;
		
	}
}