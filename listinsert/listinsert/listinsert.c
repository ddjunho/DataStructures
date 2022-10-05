#include <stdio.h>
void main() {
	int list[7] = { 10, 20, 30, 40, 50, 60, 70 };
	int i=0, data, inx;
	printf("삽입원소 : ");
	scanf_s("%d", &data);
	if (data < list[0]) inx = 0;
	else
	{
		for (i = 0; i < 6; i++)
		{
			if (list[i] <= data && data <= list[i + 1]) {
				inx = i + 1;
				break;
			}
		}

	}
	
	if (i == 6) inx = i;
	for (i = 6; i > inx; i--)
		list[i] = list[i - 1];
	list[inx] = data;
	for (i = 0; i < 7; i++)
		printf("%d\t", list[i]);
	printf("\n\n");
	printf("====삭제 알고리즘====\n\n");
	printf("삭제원소 : ");
	scanf("%d", &data);
	for (i=0; i<7; i++)
		if (list[i] == data) {
			inx = i;
			break;

		}
	if (i == 7)printf("삭제할 원소를 찾지 못했습니다.\n");
	else {
		for (i = inx; i < 6; i++)
			list[i] = list[i + 1];
		list[i] = 0;
	}
	for (i = 0; i < 7; i++)
		printf("%d\t", list[i]);
	printf("\n\n");
}