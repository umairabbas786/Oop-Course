#include <iostream>
#include "MyString.h"
using namespace std;

void print(const MyString& obj)
{
	int length = obj.getCurrentSize();
	for (int i = 0; i < length; i++)
	{
		cout << obj[i] << " ";
	}
	if (obj.getCurrentSize() == 0) {
		cout << "String Is Empty" << endl;
	}

	cout << endl;
}

int main()
{
	MyString str1;// make a default string of 100 size
	str1.add('[');//insert at position 1 or index 0
	str1.add('A');//insert at position 2 or index 1
	str1.add('B');//insert at position 3 or index 2
	str1.add('C');//insert at position 4 or index 3
	str1.add('D');//insert at position 5 or index 4
	str1.add('E');//insert at position 6 or index 5
	str1.add('F');//insert at position 7 or index 6
	str1.add('G');//insert at position 8 or index 7
	str1.add('h');//insert at position 9 or index 8
	str1.add('i');//insert at position 10 or index 9
	str1.add('j');//insert at position 11 or index 10
	str1.add('k');//insert at position 12 or index 11
	str1.add('l');//insert at position 13 or index 12
	str1.add('m');//insert at position 14 or index 13
	str1.add('n');//insert at position 15 or index 14
	str1.add('o');//insert at position 16 or index 15 
	str1.add('p');//insert at position 17 or index 16
	str1.add(']');//insert at position 18 or index 17
	cout << "str1\n";
	print(str1);
	cout << "Lenghth of str1 is = " << str1.length() << endl;

	cout << "str2\n";
	MyString str2(str1, 2, 9);//should copy str1 to str2 from position 2 to 9
	print(str2);
	cout << "Lenghth of str2 is = " << str2.length() << endl;

	cout << "str4\n";
	const MyString str4; //It should accesss all constant functions
	print(str4);
	cout << "Lenghth of str4 is =" << str4.length() << endl;
	str1.clear();//It should clear the string by placing null char at all indexes and setting count to zero
		cout << "After clearing str1\n";
	print(str1);
	str1.add('$');
	cout << "After adding $ to str1\n";
	print(str1);
	str1.add('$');
	cout << "After adding $ to str1\n";
	print(str1);
	MyString str3;
	str3 = str1 + str2;//It will concatenate both the strings and assign it to str3
	cout << "str3\n";
	print(str3);
	MyString str5(5);//should make an empty array of size 5
	str5.add('a');
	str5.add('B');
	str5.add('c');
	str5.add('D');
	str5.add('e');
	cout << "str5\n";
	print(str5);

	str5[0] = str5[1] + 1; //add 1 to the char at 1st index and assign it to 0th index
	print(str5);
	print(str5++);//post-increment
	print(++str5);//pre-increment
	print(--str5);//pre-decrement
	print(str5--);//post-decrement
	MyString str8;
	str8 = str5;//assigning str5 to str8
	cout << "str8\n";
	print(str8);

	MyString str9;
	str9.add('B');
	str9.add('I');
	str9.add('L');
	str9.add('A');
	str9.add('L');
	str9.add(' ');
	str9.add('I');
	str9.add('S');
	str9.add('H');
	str9.add('F');
	str9.add('A');
	str9.add('Q');
	cout << "str9\n";
	++++str9; //check with return by value and return by reference both
	print(str9);
	MyString str10;
	MyString str11;
	(str11 = str10) = str9; //check with return by value and return by reference both

	cout << "str10\n";
	print(str10);
	cout << "str11\n";
	print(str11);
	
	system("pause");
	return 0;
}