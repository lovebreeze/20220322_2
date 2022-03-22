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

#include <stdio.h>

int main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);
	int max = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			if (max < i)
			{
				max = i;
			}
		}
	}

	printf("최대공약수는 %d ", max);

	return 0;
}

//for 문

//for (int i = 1; i <= 10; i++)
//{
//	if (i % 3 == 0)
//	{
//		printf("\n(3의 배수임)");
//		continue;
//	}
//	printf("\n%d", i);
//}

//쉬프트 연산자

//int memory = 3; // 0000 0011 
////비트를 3번 오른쪽으로 이동 0001 1000
//printf("%d\n", memory <<= 3);
//printf("%d\n", memory);
//printf("%d\n", memory >>= 5);

//최대 공약수 
// 변수 2개에 값을 설정해서 최대 공약수 구하기;
