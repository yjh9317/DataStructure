#include "BinaryTree.h"

int main()
{
	Node<char>* node1 = new Node<char>('G',nullptr,nullptr);
	Node<char>* node2 = new Node<char>('F',nullptr,nullptr);
	Node<char>* node3 = new Node<char>('E',nullptr,nullptr);
	Node<char>* node4 = new Node<char>('D',nullptr,nullptr);
	Node<char>* node5 = new Node<char>('C',node2,node1);
	Node<char>* node6 = new Node<char>('B',node4,node3);
	Node<char>* node7 = new Node<char>('A',node6,node5);

	/*						A
	*				B				C
	*			D		E		F		G
	*/

	cout << "전위:";
	PreOrder(node7);
	cout << "\n"<<"중위:";
	InOrder(node7);
	cout << "\n"<<"후위:";
	PostOrder(node7);
	/*
	* 결과
	전위 : A B D E C F G
	중위 : D B E A F C G
	후위 : D E B F G C A
	*/
}