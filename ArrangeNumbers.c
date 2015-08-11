// ArrangeNumbers.c
/*
파일 이름: ArrangeNumbers.c
기     능: 입력받은 수를 크기 순으로 정렬한다.
작  성 자: 송 용 단
작성 일자: 2015년 8월 11일
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 3
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long(*numbers));
void ArrangeNumbers(Long(*numbers));
void Output(Long(*numbers));

int main(int argc, char *argv[]) {
	Long numbers[MAX];

	Input(numbers);
	ArrangeNumbers(numbers);
	Output(numbers);

	return 0;
}

void Input(Long(*numbers)) {
	Long i;

	for (i = 0; i < MAX; i++) {
		scanf("%d", numbers + i);
	}
}

void ArrangeNumbers(Long(*numbers)) {
	Long temp;
	Long i;
	Long j;

	for (i = 0; i < MAX - 1; i++) {
		for (j = i + 1; j < MAX; j++) {
			if (numbers[i] < numbers[j]) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}

void Output(Long(*numbers)) {
	Long i;

	for (i = 0; i < MAX; i++) {
		printf("%d\n", numbers[i]);
	}
}