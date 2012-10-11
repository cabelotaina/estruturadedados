#ifndef _LINKED_STACK_H
#define _LINKED_STACK_H

//#include <string.h>

class StackInfo{
public:
	char* nome;
        int telefone;
	char* email;
};

class StackElement{
public:
                StackElement* next;
                StackInfo* info;
};

class LinkedStack{

public:
                LinkedStack();
                ~LinkedStack();

                StackInfo* pop();
                void push(StackInfo* info);
                StackInfo* peek();

private:
                StackElement* head;
                int size;
};
#endif
