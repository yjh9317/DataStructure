#pragma once
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class Queue{
private:
	T* _pQueue;		// 데이터를 저장할 배열
	int _front;		// 가장 맨앞
	int _rear;		// 가장 맨뒤
	int _size;		// 큐의 크기


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


	bool empty()	//큐가 비어있다는 조건은 front와 rear의 값이 같을 때
	{
		return this->_front == this->_rear;
	}

	bool full()		//큐가 차있다는 조건은 rear이 사이즈의 개수와 같을 때 (인덱스는 0부터 시작했으므로 -1)
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
		_pQueue[++_rear] = Data;		// 배열의 rear에 값을 넣어주고 rear++
	}


	T pop()
	{
		if (empty())
		{
			cout << "Queue is empty" << endl;
			return -1;
		}
		return _pQueue[_front++];		//queue의 가장 앞의 값을 return하고 front++
	}

	void front()		//가장 맨앞의 원소를 출력
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
