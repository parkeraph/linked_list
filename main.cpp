#include "node.h"
#include "list.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(){
	list* myList = new list();
	int randInt;	


	for(int i = 1;i < 10; i++){
		srand(time(NULL));
		randInt = rand() % 10 + 1;
		myList->insertTail(randInt);
	}
	
	myList->printList();

        return 0;
}  
