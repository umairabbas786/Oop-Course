#pragma once
class DynamicArray
{
private:
	int size;
	int* ptr;
public:
	DynamicArray(); //constructor
	DynamicArray(const DynamicArray&); //copy constructor
	DynamicArray(const int, const int*); //parametirized constructor
	void Print() const;
	void Add(const int);
	void Subtract(const int);
	void Multiply(const int);
	void Divide(const int);
	int GetIndexOf(const int) const;
	int GetValueAtIndex(const int)const;
	void InsertValueAtEnd(const int);
	void DeleteValue(const int);
	void CopyArray(const int size, const int* arr);
	void CopyObject(const DynamicArray& other);
	void SortAscending();
	void SortDescending();
	DynamicArray MergeArray(const DynamicArray& other);
	DynamicArray MergeArrayAndSort(const DynamicArray& other);
	~DynamicArray(); //destructor
};

