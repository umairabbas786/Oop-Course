#include <iostream>
using namespace std;

template <class T> class Stack
{
private:
	T* arr;
	int size;
	int currLoc;
public:
	Stack()
	{
		size = 10;
		arr = NULL;
		currLoc = 0;
	}
	Stack(int s)
	{
		size = s;
		arr = new T[size];
		currLoc=0;
	}
	void push(T num)
	{
		if (currLoc < size) {
			arr[currLoc] = num;
			currLoc++;
		}
	}
	int pop()
	{
		return arr[currLoc - 1];
		int num = arr[currLoc - 1];
		int flag = 0;
		int index = -1;
		for (int i = 0; i < currLoc; i++) {
			if (arr[i] ==num) {
				index = i;
				flag = 1;
				break;
			}
		}
		if (flag) {
			for (int i = index; i < currLoc; i++) {
				arr[i] = arr[i + 1];
			}
			arr[currLoc - 1] = '\0';
			currLoc--;
		}
		else {
			cout << "Not Found !!" << endl;
		}

	}
	bool IsFull()
	{
		if (currLoc >= size) {
			return true;
		}
		else {
			return false;
		}
	}
	bool IsEmpty()
	{
		if (currLoc <= 0) {
			return true;
		}
		else {
			return false;
		}
	}
	int getTop()
	{
		return arr[currLoc];
	}
	void Display()
	{
		for (int i = 0; i < currLoc; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Stack()
	{
		delete[] arr;
		arr = NULL;
		size = 0;
		currLoc = 0;
	}
};

int main()
{
	Stack<int> st_obj(5);
	st_obj.push(3);
	st_obj.Display();
	st_obj.push(6);
	st_obj.Display();
	st_obj.push(4);
	st_obj.Display();
	int value = st_obj.pop();
	cout << value << endl;
	st_obj.push(-9);
	st_obj.Display();



	system("pause");
	return 0;
}