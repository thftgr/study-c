#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5];	// �迭 ����
	int* arr_2;		// ������ ���� ����
	int i;

	for (i = 0; i < 5; i++) {
		arr_1[i] = i + 1;	// �迭�� �� ����
	}

	arr_2 = (int*)malloc(sizeof(int) * 5);	// �޸� �Ҵ�, �迭�� ũ�⸸ŭ �Ҵ��ϱ� ���� 5�� ����

	for (i = 0; i < 5; i++) {
		arr_2[i] = i;
		printf("%d ", arr_2[i]);
	}

	printf("\n0x%x, 0x%x\n", arr_1, arr_2);

	printf("0x%x, 0x%x, 0x%x\n", &arr_2, arr_2, *arr_2);
	printf("\n");
	
	
	printf("arr2�� �ּ�                           :0x%x\n", &arr_2);
	printf("arr2�� ������ �ִ� �ּҰ�             :0x%x\n", arr_2);
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%x\n", *arr_2);

	printf("arr2�� �ּ�                           :0x%x\n", &arr_2[1]);
	printf("arr2�� ������ �ִ� �ּҰ�             :0x%x\n", arr_2[1]);
	printf("arr2�� ������ �ִ� �ּҰ�             :0x%x\n", arr_2+1);
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%d\n", *arr_2 + 10);
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%d\n", *arr_2 + 20);
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%d\n", *arr_2 + 30);
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%x\n", *(arr_2 + 1));
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%x\n", *(arr_2 + 3));
	printf("arr2�� ������ �ִ� �ּ��� �� (16����) :0x%x\n", *(arr_2 + 2));

	return 0;
}
