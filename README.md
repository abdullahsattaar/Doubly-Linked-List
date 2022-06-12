# Doubly-Linked-List
C++ code of Doubly Linked List and its operations, a template node class.

1.	Implement a template class ‘Node’ that contains three data members: A template variable ‘data’, a Node pointer ‘next’, and another node pointer ‘prev’. You may define any member functions, if required, for this template class.
 

2.	Now using the above class, implement a doubly linked list which has a dummy head and a dummy tail, and supports the following operations:
a.	Insert at start:	 void insertAtStart(T const element)
b.	Insert at end:	 void insertAtEnd(T const element)
c.	Delete from Start: void DeleteAtStart()
d.	Delete from end: void DeleteAtEnd()
e.	Print	 void print() const
f.	Reverse all elements of linked list: void reverse()
g.	remove all duplicate values: void removeDuplicates()
h.	Insert value v1 before value v2: bool insertBefore(T const v1, T const v2 )
i.	Delete value v2 after  value v1: bool DeleteAfter(T const v1, T const v2 )
j.	Merge Linked list L1 and Linked list L2: Node<T>* mergeLists(Node<T>* L1, Node<T>* L2);
k.	Destructor


3.	Now create a main function which has the following instructions:
a.	Define a doubly linked list object (L1) of type int.     
b.	Insert 7 and 9 at end.
c.	Insert 9 at start.
d.	Now insert 10, and 9 at end.
e.	Now print the linked list.
f.	Remove all duplicate values.
g.	Insert 6 before 11.
h.	Print the linked list.
i.	Reverse all elements of linked list.
j.	Now print the linked list.
k.	Define a doubly linked list object (L2) of type int.     
l.	Insert 10, 20 and30 at start of L2.
m.	Print the linked list.
n.	Now merge L1 and L2 and print the resultant list.
