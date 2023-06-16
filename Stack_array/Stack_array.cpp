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
	}
};