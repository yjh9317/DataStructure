#include<iostream>
using std::cout;
using std::endl;

template<typename T>
class Stack{
private:
	T* _pStack;		//�����迭 �Ҵ�
	int _top;		//���� ���� �ε���
	int _capacity;	//������ ũ��

public:
	Stack()
	{
		_capacity = 10;
		_pStack = new T[_capacity];
		_top = -1;				// ���ÿ� �����͸� �߰����ָ� �ε����� 0���� �����ϱ����� -1
	}
	~Stack()
	{
			delete []_pStack;
	}
	T& top()
	{
		return _pStack[_top];
	}

	void push(const T& _Data)  // const�� ������ ������ stack�ȿ� ����� ����������� �ص� ������.
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
		return _top + 1; // �ε��� 0���� �����ϹǷ� +1
	}
};