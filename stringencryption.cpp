#include<iostream>
#include<string>
using namespace std;

class Stack {
public:
	char *arr;
	int top;
	int capacity;
	Stack(int c) {
		this->capacity = c;
		this->arr = new char[c];
		this->top = -1;
	}
	void push(int);
	char pop();
};

void Stack::push(int data) {
	if (this->top + 1 == this->capacity) {//if stack is empty
		cout << "STACK OVERFLOW\n";
	}
	else {
		this->top++;
		this->arr[this->top] = data;
	}
}

char Stack::pop() {
	char temp;
	if (this->top == -1)//if stack empty
		return 'n';
	else {
		temp = this->arr[this->top];
		this->arr[this->top] = 0;
		this->top--;
		return temp;
	}
}

int main() {
	Stack s1(105);
	string input;
	char *newArr;
	int test = 0;
	cin >> test;
	while (test) {
		newArr = new char[input.length()];
		cin >> input;
		//pushing elements into stack
		for (int i = 0;i < input.length();i++) {
			if (i % 2 == 0)//even numbers
				s1.push(input[i]);
		}
		for (int i = 0; i < input.length(); i++)
		{
			if (i % 2 == 1)//odd numbers
				s1.push(input[i]);
		}

		for (int i = input.length() - 1;i >=0;i--) {
			newArr[i] = s1.pop();
		}
		for (int i = 0;i < input.length();i++)
			cout << newArr[i];

		cout << "\n";
		test--;
	}

	return 0;
}