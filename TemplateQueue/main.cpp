#include <iostream>
#include "Queue.h"

int main()
{
	Queue<int> q;
	q.pop();	//��������� pop
	cout << "\n";
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	q.push(60);	//��á���� push
	cout << "\n";

	q.show();	

	q.pop();	//���� �Ǿտ��ִ� 10�� pop	

	q.front();	//���� �Ǿտ� �ִ� 20�� ���
	cout << "\n";

	q.pop();	// 20 �� pop

	q.show();	//������ show
}