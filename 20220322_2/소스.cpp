#include <stdio.h>

int main()
{
	int value = 10;

	printf("%p\n", value);

	int *ptr = &value;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	printf("%p\n", *ptr);

	// ������ ������ ��ü������ �޸� ������ ������ �ֽ��ϴ�.
	
	// 4 ptr -> 4 value

	//ptr = value�� ���� �ּҸ� ����Ű�°�
	//&ptr = ptr�� �޸� �ּ�
	//*ptr = ����Ű�� �Լ� ���� ǥ��


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

	printf("�ִ������� %d ", max);

	return 0;
}

//for ��

//for (int i = 1; i <= 10; i++)
//{
//	if (i % 3 == 0)
//	{
//		printf("\n(3�� �����)");
//		continue;
//	}
//	printf("\n%d", i);
//}

//����Ʈ ������

//int memory = 3; // 0000 0011 
////��Ʈ�� 3�� ���������� �̵� 0001 1000
//printf("%d\n", memory <<= 3);
//printf("%d\n", memory);
//printf("%d\n", memory >>= 5);

//�ִ� ����� 
// ���� 2���� ���� �����ؼ� �ִ� ����� ���ϱ�;
