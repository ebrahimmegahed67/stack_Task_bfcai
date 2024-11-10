#include<iostream>

using namespace std;
class stack
{
	int size;
	int top;
	int* items;
public:
	stack()
	{
		cout << "enter size of the array" << endl;
		cin >> size;
		items = new int[size];
		top = -1;
	}
	void push(int);
	int pop();
	int Top();
	void display();
};
int main()
{
	stack s;
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(8);
	s.display();


	return 0;
}
void stack::push(int val) {
	if (top == size - 1)
	{
		cout << "stack is overflow" << endl;
		
	}
	else {
		items[++top] = val;
	}
}
int stack::pop()
{
	if (top == -1) {
		cout << "Stack is nderflow" << endl;
	}
	else {
		int num = items[top];
		return num;
		top--;
	}
}
int stack::Top() {
	return items[top];
}
void stack::display()
{
	for (int i = 0; i <= top;i++) {
		cout << "index of num "<<i+1 << "= " << items[i] << endl;
	}
}

















