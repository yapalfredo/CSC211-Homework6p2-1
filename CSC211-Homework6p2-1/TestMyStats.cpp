#include "MyStats.h"

const char * c1 = "The initialized values of elements in the array are: \n\n";
const char * c2 = "\nThe average of the values stored in the array is: ";
const char * c3 = "\nThe largest value stored in the array is: ";
const char * c4 = "\nThe smallest value stored in the array is: ";

int main()
{
	MyStats stat;
	ofstream outFile;
	long pos;

	outFile.open("Homework-6p2-1.txt");	// opens an ofstream object

	cout << c1;
	//-------------------------
	outFile.write(c1, 56);
	stat.print(outFile);
	//-------------------------
	stat.print();

	cout << c2 << stat.average() << endl;
	//-------------------------
	pos = outFile.tellp();
	outFile.seekp(pos);
	outFile.write(c2, 51);
	pos = outFile.tellp();
	outFile.seekp(pos);
	//-------------------------
	outFile << stat.average() << endl;

	cout << c3 << stat.findLargest() << endl;
	//-------------------------
	pos = outFile.tellp();
	outFile.seekp(pos);
	outFile.write(c3, 43);
	//-------------------------
	outFile << stat.findLargest() << endl;

	cout << c4 << stat.findSmallest() << endl << endl;
	//-------------------------
	pos = outFile.tellp();
	outFile.seekp(pos);
	outFile.write(c4, 44);
	//-------------------------
	outFile << stat.findSmallest() << endl << endl;

	outFile.close();					// closes an ofstream object
	system("pause");
	return 0;
}