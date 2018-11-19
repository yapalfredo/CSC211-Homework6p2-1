#include "MyStats.h"

int main()
{
	MyStats stat;

	/// this class will be loaded in the main function
	cout << "The initialized values of elements in the array are: " << endl << endl;
	stat.print();

	cout << endl;
	cout << "The average of the values stored in the array is: " << stat.average() << endl;

	cout << endl;
	cout << "The largest value stored in the array is: " << stat.findLargest() << endl;

	cout << endl;
	cout << "The smallest value stored in the array is: " << stat.findSmallest() << endl << endl;

	system("pause");

	return 0;

}