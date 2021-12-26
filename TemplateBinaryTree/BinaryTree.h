#include<iostream>
using std::cout;
using std::endl;

template<typename T>
class Node {
public:
	T _data;
	Node* Lchild;			
	Node* Rchild;			

public:
	Node() :
		_data(0), Lchild(nullptr), Rchild(nullptr) {};
	Node(T data,Node* l,Node* r)
		:_data(data), Lchild(l), Rchild(r) {};
	~Node();


};

template<typename T>
void PreOrder(Node<T>* _Node)		// 전위 순회
{
	if (nullptr != _Node)
	{
		cout << _Node->_data << " ";
		PreOrder(_Node->Lchild);
		PreOrder(_Node->Rchild);
	}
}
template<typename T>
void InOrder(Node<T>* _Node)			// 중위 순회
{
	if (nullptr != _Node)
	{
		InOrder(_Node->Lchild);
		cout << _Node->_data << " ";
		InOrder(_Node->Rchild);
	}
}
template<typename T>
void PostOrder(Node<T>* _Node)		// 후위 순회
{
	if (nullptr != _Node)
	{
		PostOrder(_Node->Lchild);
		PostOrder(_Node->Rchild);
		cout << _Node->_data << " ";
	}
}