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

