#pragma once


class node{
	private: 
		int data;
		node* next;
	public:
		node(node* thisNext, int thisData);
		node();
		void setData(int thisData);
		int getData();
		void setNext(node* thisNext);
		node* getNext();
};
