
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            new_node->set_next(top);
            top=new_node;   
   }
   size++;
         // Left missing for exercises…
    
}

int Stack::pop(){
        NodePtr t=top;
        if(t!=NULL){
             int value;
        value=t->get_value();
        t->get_next();
        size--;
      
        delete t;
        return value;
        }
    }   
	//be careful of the empty stack!!!
    

Stack::Stack(){
    top=NULL;
    size=0;
    
}
Stack::~Stack(){
    cout<<"POP REMAINS"<<endl;
    int n=size;
    while(n<0){
        pop();
        n--;
    }   
}


#endif
