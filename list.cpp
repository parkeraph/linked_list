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
	int i = 2;	

	do{
		this->current = this->current->getNext();
		i++;
	}while(this->current != this->tail);
	
	this->current = this->head;
	return i;
}

//this only sets the member variable, all 
//pointers must be config'd first
void list::setHead(node* thisNode){
	this->head = thisNode;
}

void list::setTail(node* thisNode){
	this->tail = thisNode;
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

//returns 1 for user error (insert out of bounds)
//returns 0 for succesful insert 
int list::insertAtIndex(int index, int thisData){
	int j = 1;
	int size = this->getSize();
	this->current = this->head;
	node* temp;
	node* newNode = new node(temp, thisData);

	if((index > this->getSize()) or (index < 1)){
		return 1;
	}

	//insert at head
	if(index == 1){
		this->tail->setNext(newNode);
		newNode->setNext(this->head);
		this->setHead(newNode);
		return 0;
	}

	while(j < index){
		temp = this->current;
		this->current = this->current->getNext();	
		j++;
	}
	
	newNode->setNext(this->current);
	temp->setNext(newNode);

	return 0;
	
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
