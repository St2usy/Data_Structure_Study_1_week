#pragma once
#include <string>
using std::string;

class Vector 
{
	string* data;
	int capacity;
	int length;

public:
	// ������
	Vector(int n = 1);

	// �� �ڿ� ���ο� ���Ҹ� �߰��Ѵ�.
	void push_back(string s);

	// ������ ��ġ�� ���ҿ� �����Ѵ�.
	string operator[](int i);

	// x ��° ��ġ�� ���Ҹ� �����Ѵ�.
	void remove(int x);

	// ���� ������ ũ�⸦ ���Ѵ�.
	int size();

	~Vector();
};