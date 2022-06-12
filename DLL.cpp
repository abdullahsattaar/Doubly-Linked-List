#include<iostream>
using namespace std;
template<typename T>
class Node
{
private:
	T data;
	Node *next;
	Node *prev;
	friend class Dlist1;
public:

	Node(T dat)
	{
		data = dat;
	}

};

template<typename T>
class Dlist1
{
private:
	Node<T> *Dhead;
	Node<T> *Dtail;

public:

	Dlist1()
	{
		Dhead->next = Dtail;
		Dhead->prev = nullptr;
		Dtail->prev = Dhead;
		Dtail->next = nullptr;

	}

	void insertAtStart(T const element)
	{
		if (Dhead->next == Dtail)
		{
			Node<T> *n(element);
			n->next = Dhead->next;
			n->prev = Dhead;
			Dhead->next = n;
			Dtail->prev = n;
		}
		else
		{
			Node<T> *n(element);
			n->next = Dhead->next;
			n->prev = Dhead;
			Dhead->next = n;
		}
	}
	void insertAtEnd(T const element)
	{
		if (Dhead->next == Dtail)
		{
			Node<T> *n(element);
			n->next = Dhead->next;
			n->prev = Dhead;
			Dhead->next = n;
			Dtail->prev = n;
		}
		else
		{
			Node<T> *n(element);
			n->next = Dtail;
			n->prev = Dtail->prev;
			Dtail->prev = n;
		}
	}

	void DeleteAtStart()
	{

		if (Dhead->next == Dtail)
			;
		else if (Dtail->prev == Dhead->next)
		{
			Node<T> *tmp;
			tmp = Dhead->next;
			delete tmp;
			Dhead->next = Dtail;
			Dtail->prev = Dhead;
		}

		else
		{
			Node<T> *tmp;
			tmp = Dhead->next;
			Dhead->next = Dhead->next->next;
			Dhead->next->prev = Dhead;
			delete tmp;
		}
	}

	void DeleteAtEnd()
	{
		if (Dhead->next == Dtail)
			;
		else if (Dtail->prev == Dhead->next)
		{
			Node<T> *tmp;
			tmp = Dtail->prev;
			delete tmp;
			Dhead->next = Dtail;
			Dtail->prev = Dhead;
		}

		else
		{
			Node<T> *tmp;
			tmp = Dtail->prev;
			Dtail->prev = Dtail->prev->prev;
			Dtail->prev->next = Dtail;
			delete tmp;
		}
	}

	void print()
	{
		Node<T> *tmp = Dhead;
		for (; tmp != Dtail; tmp = tmp->next)
			cout << tmp->data << " ";
		cout << endl;
	}
	void reverse()
	{



	}
	void removeDuplicates()
	{
		Node<T> *tmp = Dhead->next;
		for (; tmp != Dtail; tmp = tmp->next)
		{
			Node<T> *tmp2 = tmp1->;
			for (; tmp2 != Dtail; tmp2 = tmp->next)
				if (tmp2 == tmp1)
				{
				Node<T> *tmp3 = tmp2;
				tmp->next = tmp->next->next;
				tmp->prev = tmp->prev->prev;
				delete tmp3;
				}
		}

	}
	bool insertBefore(T const v1, T const v2)
	{
		Node<T> *tmp(v1);
		Node<T> *tmp2 = Dhead;
		for (; tmp2.data != v2; tmp2 = tmp2->next)
		{ }
		tmp->prev = tmp2->prev;
		tmp->next = tmp2;
		tmp2->prev = tmp;
		return 1;

	}
	bool DeleteAfter(T const v1, T const v2)
	{
		Node<T> *tmp2;

	}
	Dlist1<T>* mergeLists(Node<T>* L1, Node<T>* L2)
	{


	}
	~Dlist1()
	{
		Node<type> * p = Dhead;
		while (!isEmpty()) {
			p = Dhead->next;
			delete Dhead;
			Dhead = p;
		}		delete Dtail;
	}
};

int main()
{
	Dlist1 <int> L1;
	L1.insertAtEnd(7);
	L1.insertAtEnd(9);
	L1.insertAtStart(9);
	L1.insertAtEnd(10);
	L1.insertAtEnd(9);
	L1.print();






	system("pause");
	return 0;
}