#include <iostream>
#include "Queue.h"

int main()
{
	Queue<int> q;
	q.pop();	//비어있을때 pop
	cout << "\n";
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	q.push(60);	//꽉찼을때 push
	cout << "\n";

	q.show();	

	q.pop();	//가장 맨앞에있는 10을 pop	

	q.front();	//가장 맨앞에 있는 20을 출력
	cout << "\n";

	q.pop();	// 20 을 pop

	q.show();	//그이후 show
}