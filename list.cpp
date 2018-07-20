#include "node.h"
#include "list.h"
#include <cstddef>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

list::list(int headData, int tailData){
	this->head = new node();
	this->tail = new node();
	
	this->head->setNext(this->tail);
	this->tail->setNext(this->head);

	this->head->setData(headData);
	this->tail->setData(tailData);
	
	this->current = this->head;
}

list::list(){
	this->head = new node();
	this->tail = new node();
	
	this->head->setNext(this->tail);
	this->tail->setNext(this->head);

	this->current = this->head;
}

int list::getSize(){
	this->current = this->head;
	int i = 0;	

	while(this->current->getNext() != this->head){
		this->current->getNext();
		i++;
	}
	
	this->current = this->head;
	return i;
}

node* list::getHead(){
        return this->head;
}

node* list::getTail(){
        return this->tail;
}

void list::insertHead(int thisData){
	node* newNode = new node(this->head, thisData);
	this->tail->setNext(newNode);
	this->head = newNode;
	this->current = this->head;
}

void list::insertTail(int thisData){
	node* newNode = new node(this->head, thisData);
	this->tail->setNext(newNode);
	this->tail = newNode;
	this->current = this->head;		
}

void list::printList(){
	this->current = this->head;
	
	do{
		cout << this->current->getData() << "-->";
		this->current = this->current->getNext();
	}while(this->current != this->head);
	
	cout << "END" << endl;
	this->current = this->head;
}
