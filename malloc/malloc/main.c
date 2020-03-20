#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5];	// 배열 선언
	int* arr_2;		// 포인터 변수 선언
	int i;

	for (i = 0; i < 5; i++) {
		arr_1[i] = i + 1;	// 배열에 값 대입
	}

	arr_2 = (int*)malloc(sizeof(int) * 5);	// 메모리 할당, 배열의 크기만큼 할당하기 위해 5를 곱함

	for (i = 0; i < 5; i++) {
		arr_2[i] = i;
		printf("%d ", arr_2[i]);
	}

	printf("\n0x%x, 0x%x\n", arr_1, arr_2);

	printf("0x%x, 0x%x, 0x%x\n", &arr_2, arr_2, *arr_2);
	printf("\n");
	
	
	printf("arr2의 주소                           :0x%x\n", &arr_2);
	printf("arr2가 가지고 있는 주소값             :0x%x\n", arr_2);
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%x\n", *arr_2);

	printf("arr2의 주소                           :0x%x\n", &arr_2[1]);
	printf("arr2가 가지고 있는 주소값             :0x%x\n", arr_2[1]);
	printf("arr2가 가지고 있는 주소값             :0x%x\n", arr_2+1);
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%d\n", *arr_2 + 10);
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%d\n", *arr_2 + 20);
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%d\n", *arr_2 + 30);
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%x\n", *(arr_2 + 1));
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%x\n", *(arr_2 + 3));
	printf("arr2가 가지고 있는 주소의 값 (16진수) :0x%x\n", *(arr_2 + 2));

	return 0;
}
