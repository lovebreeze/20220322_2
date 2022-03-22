#include <stdio.h>

int main()
{
	int value = 10;

	printf("%p\n", value);

	int *ptr = &value;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	printf("%p\n", *ptr);

	// 포인터 변수도 자체적으로 메모리 공간을 가지고 있습니다.
	
	// 4 ptr -> 4 value

	//ptr = value의 시작 주소를 가리키는것
	//&ptr = ptr의 메모리 주소
	//*ptr = 가리키는 함수 값을 표현


	printf("%p\n", &ptr);

	scanf_s("%d", &*ptr);

	printf("%d", value);

	return 0;
}

