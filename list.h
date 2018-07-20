#pragma once
#include "node.h"

class list{
        private:
                node* head;
                node* tail;
                node* current;
        public:
                list(int headData, int tailData);
		list();
		int getSize();
                void insertHead(int thisData);

                void insertTail(int thisData);
                node* getHead();
                node* getTail();
           //   void intertAtIndex(node* thisNode, int index);
           	void printList();
};

