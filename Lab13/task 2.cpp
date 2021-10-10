#include <iostream>
using namespace std;

template<class T>class Queue
{
	T* arr;
	int size;
	int currLoc;
	int front;
	int rear;
public:
	Queue()
	{
		size = 10;
		arr = NULL;
		currLoc = 0;
		front = -1;
		rear = -1;
	}
	Queue(int s)
	{
		size = s;
		arr = new T[size];
		currLoc = 0;
		front = -1;
		rear = -1;
	}
	void EnQueue(T num)
	{
		arr[currLoc] = num;
		currLoc++;
		rear++;
	}
	T DeQueue()
	{
		return arr[currLoc - 1];
		int num = arr[0];
		int flag = 0;
		int index = -1;
		for (int i = 0; i < currLoc; i++) {
			if (arr[i] == num) {
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
			front++;
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
	~Queue()
	{
		size = 0;
		arr = NULL;
		rear = 0;
		front = 0;
	}
	void Display()
	{
		for (int i = 0; i < currLoc; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Queue<int> qu_obj(5);
	qu_obj.EnQueue(3);
	qu_obj.Display();
	qu_obj.EnQueue(6);
	qu_obj.Display();
	qu_obj.EnQueue(4);
	qu_obj.Display();
	int value = qu_obj.DeQueue();
	cout << value << endl;
	qu_obj.Display();


	system("pause");
	return 0;
}