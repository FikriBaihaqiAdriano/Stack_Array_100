#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) { //step 1
			cout << "Number of data exceeds the Limit." << endl;
			return 0;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}
	}
};