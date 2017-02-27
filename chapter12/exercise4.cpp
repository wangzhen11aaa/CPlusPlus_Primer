//
// Created by wangzhen on 27/02/2017.
//

#include <iostream>
#include "stack.h"

int main(void)
{
    using std::cout;
    using std::endl;

    Stack stack(20);
    if (stack.isempty())
        cout << "Now stack is empty \n";

    Item i = 20;
    stack.push(i);
    Item o;
    stack.pop(o);
    cout << "Pop from the stack is :" << o << endl;
    if (stack.isempty())
        cout << "Stack is empty again \n";

    if (!stack.pop(o))
        cout <<  "Pop from stack failed for the empty stack \n";

    if(stack.push(long(5)))
        cout << "Push long(5) into the stack succeed \n";

    Stack stack_copy = stack;

    Stack stack_assign;
    stack_assign = stack;

    stack.pop(o);
    cout << "Pop from the stack_assign is " << o << endl;
    return 0;

}