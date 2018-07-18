#include "node.h"
#include "list.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
        node* secondNode = new node();
	secondNode->setData(30);
	node* firstNode = new node(secondNode, 29);

	cout << firstNode->getData() << endl;
	
	node* firstDupe	= firstNode->getNext();

	cout << firstDupe->getData() << endl;

	list* myList = new list(firstNode, secondNode);
	cout << myList->getSize() << endl;	
	
	node* newFirstNode = new node();
	newFirstNode->setData(28);
	
	myList->insertHead(newFirstNode);

	cout << myList->getSize() << endl;
	
        return 0;
}  
