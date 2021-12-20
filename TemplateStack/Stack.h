#include<iostream>
using std::cout;
using std::endl;

template<typename T>
class Stack{
private:
	T* _pStack;		//동적배열 할당
	int _top;		//가장 맨위 인덱스
	int _capacity;	//스택의 크기

public:
	Stack()
	{
		_capacity = 10;
		_pStack = new T[_capacity];
		_top = -1;				// 스택에 데이터를 추가해주면 인덱스가 0부터 시작하기위해 -1
	}
	~Stack()
	{
			delete []_pStack;
	}
	T& top()
	{
		return _pStack[_top];
	}

	void push(const T& _Data)  // const를 붙이지 않으면 stack안에 상수를 집어넣으려고 해도 실패함.
	{
		if (_top + 1 == _capacity)
		{
			cout << "Stack is Full" << endl;
			return;
		}
		_pStack[++_top] = _Data;
		return;
	}
	T pop()
	{
		if (_top < 0)
		{
			cout << "Stack is empty" << endl;
			return -1;
		}
		return _pStack[_top--];
	}
	bool empty()
	{
		//
		if (_top != -1)
		{
			return false;
		}

		return true;
	}
	int size()
	{
		return _top + 1; // 인덱스 0부터 시작하므로 +1
	}
};