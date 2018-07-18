#include "node.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
        node* mynode = new node();
	mynode->setData(30);
	node* firstNode = new node(mynode, 29);

	cout << firstNode->getData() << endl;
	
	node* firstDupe	= firstNode->getNext();

	cout << firstDupe->getData() << endl;

        return 0;
}  
