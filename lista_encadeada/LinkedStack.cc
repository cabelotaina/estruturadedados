#include <LinkedStack.h>

LinkedStack:: LinkedStack(){

}

LinkedStack::~LinkedStack(){

}

void LinkedStack:: push( StackInfo* info ){
	StackLement* newElement = new StackElement(info);

	newElement -> next = head;
	head = newElement;
	size++;
}

void LinkedStack::push( StackInfo* info){
	StackElement* newElement = new StackElement(info);
	
}

StackInfo* LinkedStack::pop(){

}

StackInfo* LinkdStack::peek(){

}
