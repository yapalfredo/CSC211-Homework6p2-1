#include "MyStats.h"
#include <string>

const string s1 = "The initialized values of elements in the array are: ";
const string s2 = "\nThe average of the values stored in the array is: ";
const string s3 = "\nThe largest value stored in the array is: ";
const string s4 = "\nThe smallest value stored in the array is: ";

int main()
{
	MyStats stat;
	ofstream outFile;

	outFile.open("Homework-6p2-1.txt");

	/// this class will be loaded in the main function
	cout << s1 << endl << endl;
	outFile << s1 << endl << endl;
	stat.print(outFile);
	stat.print();

	cout << s2 << stat.average() << endl;
	outFile << s2 << stat.average() << endl;

	cout << s3 << stat.findLargest() << endl;
	outFile << s3 << stat.findLargest() << endl;

	cout << s4 << stat.findSmallest() << endl << endl;
	outFile << s4 << stat.findSmallest() << endl << endl;

	outFile.close();
	system("pause");
	return 0;

}