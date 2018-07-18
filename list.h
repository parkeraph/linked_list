#pragma once
#include "node.h"

class list{
        private:
                node* head;
                node* tail;
                node* current;
        public:
                list();
                list(node* thisHead, node* thisTail);
		int getSize();

                void insertHead(node* thisHead);
                void insertTail(node* thisTail);
                node* getHead();
                node* getTail();
           //   void intertAtIndex(node* thisNode, int index);
           	void printList();
};

