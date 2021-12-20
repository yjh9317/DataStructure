#include<iostream>
#include "Stack.h"

int main()
{
	Stack<int> s;

	if (s.empty())
	{
		cout << "stack is empty" << endl;
	}

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout<<s.top()<<endl;

	s.pop();

	cout << s.top() << endl;
	cout << s.size() << endl;

	cout << endl;
	///////////////////////////////////////////////


	Stack<char> c;

	c.push('A');
	c.push('B');
	c.push('C');
	cout << c.top() << endl;

	c.pop();

	cout << c.top() << endl;

}