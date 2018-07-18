#include "node.h"
#include "list.h"
#include <cstddef>
#include <stdlib.h>
#include <iostream>
using namespace std;

list::list(){
	this->head = NULL;
	this->tail = NULL;
}

list::list(node* thisHead, node* thisTail){
	this->head = thisHead;
	this->tail = thisTail;
	this->head->setNext(this->tail);
					
	this->current = thisHead;
}

int list::getSize(){
	int count = 1;
	this->current = this->head;

	while(this->current != this->tail){
		this->current = this->current->getNext();
		count++;
	}
	
	//reset cur
	this->current = this->head;
	return count;
}

node* list::getHead(){
        return this->head;
}

node* list::getTail(){
        return this->tail;
}

void list::insertHead(node* thisHead){
	node* temp = this->head;
	this->head = thisHead;
	this->head->setNext(temp);
	this->tail->setNext(this->head);
}

void list::insertTail(node* thisTail){
	thisTail->setNext(this->tail->getNext());
	node* nextNode;	

	int listSize = this->getSize();
	for(int i=1; i<listSize; i++){
		nextNode = this->current->getNext();		
		this->current = nextNode;
	}
	
	this->current->setNext(thisTail);
	this->tail = thisTail;
}

void list::printList(){
	this->current = this->head;
	int size = this->getSize();
	int i = 0;	

	do{
		cout << this->current->getData() << "-->";
		this->current = this->current->getNext();
		i++;

	}while(i < size);
	
	cout << "END" << endl;
}

