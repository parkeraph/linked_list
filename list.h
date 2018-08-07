#pragma once
#include "node.h"

class list{
        private:
                node* head;
                node* tail;
                node* current;
                void setHead(node* thisNode);
                void setTail(node* thisNode);
        public:
                list(int headData, int tailData);
				list();
				int getSize();
                void insertHead(int thisData);
                void insertTail(int thisData);
                node* getHead();
                node* getTail();
           		int insertAtIndex(int index, int thisData);
           		void printList();
};

