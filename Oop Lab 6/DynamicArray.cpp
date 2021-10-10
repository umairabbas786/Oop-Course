#include "DynamicArray.h"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray() {
	size = 0;
	ptr = nullptr;
}
DynamicArray::DynamicArray(const DynamicArray& ref) {
	int length = 0;
	while (ref.ptr[length] != '\0')
		++length;
	ptr = new int[length + 1];
	for (int i = 0; i < length; i++) {
		ptr[i] = ref.ptr[i];
	}
	ptr[length] = '\0';
	size = ref.size;
}
DynamicArray::DynamicArray(const int s, const int* arr) {
	int length = 0;
	while (arr[length] != '\0') {
		++length;
	}
	ptr = new int[length + 1];
	for (int i = 0; i < length; i++) {
		ptr[i] = arr[i];
	}
	ptr[length] = '\0';
	size = s;
}
void DynamicArray::Print() const {
	cout << "Size is: " << size << endl;
	cout << "Integer Array Is: " << endl;
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << " ";
	}

}
void DynamicArray::Add(const int value) {
	for (int i = 0; i < size; i++) {
		ptr[i] = ptr[i] + value;
	}
}
void DynamicArray::Subtract(const int value) {
	for (int i = 0; i < size; i++) {
		ptr[i] = ptr[i] - value;
	}
}
void DynamicArray::Multiply(const int value) {
	for (int i = 0; i < size; i++) {
		ptr[i] = ptr[i] * value;
	}
}
void DynamicArray::Divide(const int value) {
	for (int i = 0; i < size; i++) {
		ptr[i] = ptr[i] / value;
	}
}
int DynamicArray::GetIndexOf(const int value) const {
	for (int i = 0; i < size; i++) {
		if (ptr[i] == value) {
			return i;
		}
	}
}
int DynamicArray::GetValueAtIndex(const int value)const {
	for (int i = 0; i < size; i++) {
		if (i == value) {
			return ptr[i];
		}
	}
}
void DynamicArray::InsertValueAtEnd(const int value)
{
	int length = 0;
	while (ptr[length] != '\0') {
		++length;
	}
	ptr = new int[length + 2];
	ptr[length - 1] = value;
	ptr[length] = '\0';
}
void DynamicArray::DeleteValue(const int value) {
	for (int i = 0; i < size; i++) {
		if (ptr[i] == value) {
			for (int j = i; j < size - 1; j++) {
				ptr[j] = ptr[j + 1];
			}
		}
	}
}
void DynamicArray::CopyArray(const int s, const int* arr) {
	size = s;
	int length = 0;
	while (arr[length] != '\0') {
		++length;
	}
	ptr = new int[length + 1];
	for (int i = 0; i < length; i++) {
		ptr[i] = arr[i];
	}
	ptr[length] = '\0';
}
void DynamicArray::CopyObject(const DynamicArray& ref) {
	int length = 0;
	while (ref.ptr[length] != '\0')
		++length;
	ptr = new int[length + 1];
	for (int i = 0; i < length; i++) {
		ptr[i] = ref.ptr[i];
	}
	ptr[length] = '\0';
	size = ref.size;
}
void DynamicArray::SortAscending() {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (ptr[i] > ptr[j]) {
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
void DynamicArray::SortDescending() {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (ptr[i] < ptr[j]) {
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
DynamicArray DynamicArray::MergeArray(const DynamicArray& other) {
	DynamicArray result;

	for (int i = 0; i < other.size; i++) {
		result.ptr[i] = ptr[i];
	}
	result.size = other.size + size;
	for (int i = 0, k = other.size; k < result.size && i < size; i++, k++)
	{
		result.ptr[k] = other.ptr[i];
	}
	return result;

}
DynamicArray DynamicArray::MergeArrayAndSort(const DynamicArray& other) {
	DynamicArray result;

	for (int i = 0; i < other.size; i++) {
		result.ptr[i] = ptr[i];
	}
	result.size = other.size + size;
	for (int i = 0, k = other.size; k < result.size && i < size; i++, k++)
	{
		result.ptr[k] = other.ptr[i];
	}
	int temp = 0;
	for (int i = 0; i < result.size; i++) {
		for (int j = i + 1; j < result.size; j++) {
			if (result.ptr[i] > result.ptr[j]) {
				temp = result.ptr[i];
				result.ptr[i] = result.ptr[j];
				result.ptr[j] = temp;
			}
		}
	}
	return result;
}
DynamicArray::~DynamicArray() {
	delete[] ptr;
	ptr = nullptr;
	size = 0;
}