#include "node.h"

#include <cstddef>

node::node(node* thisNext, int thisData){
	this->next = thisNext;
	this->data = thisData;
}

node::node(){
	this->data = 0;
	this->next = NULL;
}

void node::setData(int thisData){
	this->data = thisData;
}

int node::getData(){
	return this->data;
}

void node::setNext(node* thisNext){
	this->next = thisNext;
}

node* node::getNext(){
	return this->next;
}
