#include "linkedstack.h"

LinkedStack::LinkedStack(){
	head = 0;
	size = 0;
}

LinkedStack::~LinkedStack(){
	while(head)
		delete pop();
}

void LinkedStack::push(StackInfo* info){
	//StackElement* newElement = new StackElement(info);
	StackElement* newElement;
	newElement->info = info;	
	newElement->next = head;
	head = newElement;
	size++;	
}

StackInfo* LinkedStack::pop(){
	if(!head){
		return 0;
	}
	StackElement* toDelete = head;
	StackInfo* info = head->info;
	head = head->next;
	delete toDelete;
}

StackInfo* LinkedStack::peek(){
	if (!head)
		return 0;
	return head->info;
}
