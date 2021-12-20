#pragma once
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class Queue{
private:
	T* _pQueue;		// �����͸� ������ �迭
	int _front;		// ���� �Ǿ�
	int _rear;		// ���� �ǵ�
	int _size;		// ť�� ũ��


public:
	Queue()
	{
		_size = 5;
		_pQueue = new T[_size];
		_front = -1;
		_rear = -1;
	}
	~Queue()
	{
		delete []_pQueue;
	}


	bool empty()	//ť�� ����ִٴ� ������ front�� rear�� ���� ���� ��
	{
		return this->_front == this->_rear;
	}

	bool full()		//ť�� ���ִٴ� ������ rear�� �������� ������ ���� �� (�ε����� 0���� ���������Ƿ� -1)
	{
		return this->_rear == _size - 1;
	}


	void push(const T& Data)
	{
		if (full())
		{
			cout << "Queue is full" << endl;
			return;
		}
		_pQueue[++_rear] = Data;		// �迭�� rear�� ���� �־��ְ� rear++
	}


	T pop()
	{
		if (empty())
		{
			cout << "Queue is empty" << endl;
			return -1;
		}
		return _pQueue[_front++];		//queue�� ���� ���� ���� return�ϰ� front++
	}

	void front()		//���� �Ǿ��� ���Ҹ� ���
	{
		if (empty())
		{
			cout << "Queue is empty" << endl;
			return;
		}
		cout << _pQueue[_front + 1]<<endl;
	}

	void show()
	{
		if (empty())
		{
			cout << "Queue is empty" << endl;
			return;
		}
		for (int i = _front + 1; i <= _rear; i++)
		{
			cout << _pQueue[i] << endl;
		}
	}
};
