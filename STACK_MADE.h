#pragma once
#include<string>
using std::string;

class Stack
{
	struct Node
	{
		Node* prev;
		string s;

		Node(Node* prev, string s)
			:prev(prev), s(s)
		{}
	};

	Node* current; // �ֻ�����

	Node start; // ��������

public:
	Stack();

	// �ֻ�ܿ� ���ο� ���Ҹ� �߰��Ѵ�.
	void push(string s);

	// �ֻ���� ���Ҹ� �����ϰ� ��ȯ�Ѵ�.
	string pop();

	// �ֻ���� ���Ҹ� ��ȯ�Ѵ�. (���� ����)
	string peek();

	// ������ ����ִ����� ������ ��ȯ�Ѵ�.
	bool is_empty();

	~Stack();

};