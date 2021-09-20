#include <iostream>
using namespace std;

template<class T> class node {     T value;     node<T>* _next;     node<T>* _prev; public:     node(){         _next = NULL;         _prev = NULL;         value = NULL;     }     ~node() {         _next = NULL;         _prev = NULL;         value = NULL;     }     void set_value(T a) {         value = a;     }     T get_value() {         return value;     }     void append(node * s) {         s->_prev = this;         s->_next = NULL;         this->_next = s;     }     node* get_next() {         return _next;     }     node* get_prev() {         return _prev;     } };

void test1()
{
	node<int> *ptr;
	node<int> node1,node2,node3;
	node1.set_value(1);
	node2.set_value(2);
	node3.set_value(3);
	node1.append(&node2);
	node2.append(&node3);

	for(ptr=&node1 ; ; ptr=ptr->get_next())
	{
		cout << ptr->get_value() << " ";
		if(ptr->get_next()==NULL) break;
	}
}

void test2()
{
	node<float> *ptr;
	node<float> node1,node2,node3;
	node1.set_value(1.1);
	node2.set_value(2.2);
	node3.set_value(3.3);
	node1.append(&node2);
	node2.append(&node3);

	for(ptr=&node1 ; ; ptr=ptr->get_next())
	{
		cout << ptr->get_value() << " ";
		if(ptr->get_next()==NULL) break;
	}
}

void test3()
{
	node<char> *ptr;
	node<char> node1,node2,node3;
	node1.set_value('a');
	node2.set_value('b');
	node3.set_value('c');
	node1.append(&node2);
	node2.append(&node3);

	for(ptr=&node1 ; ; ptr=ptr->get_next())
	{
		cout << ptr->get_value() << " ";
		if(ptr->get_next()==NULL) break;
	}
}

int main( )
{
	int type;
	cin >> type;
	
	switch(type)
	{
		case 1:
		test1();
		break;
		
		case 2:
		test2();
		break;

		case 3:
		test3();
		break;
	}
    return 0;
}
