#include "node.h"
#include "list.h"
#include <cstddef>

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
	int i = 0;
	this->current = this->head;
	node* nextNode = this->head->getNext();
	do{

		i++;
		this->current = nextNode;
		nextNode = this->current->getNext();

	}while(this->current != this->tail);

	return i;
}

node* list::getHead(){
        return this->head;
}

node* list::getTail(){
        return this->tail;
}

void list::setHead(node* thisHead){
	node* temp = this->head;
	this->head = thisHead;
	
	this->tail->setNext(this->head);
}

void list::setTail(node* thisTail){
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




