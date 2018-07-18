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

                void setHead(node* thisHead);
                void setTail(node* thisTail);
                node* getHead();
                node* getTail();
           //   void intertAtIndex(node* thisNode, int index);
};

