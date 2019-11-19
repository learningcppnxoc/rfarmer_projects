#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

/*

3-0. Compile, execute, and test the programs in this chapter.
3-1. Suppose we wish to find the median of a collection of values. Assume that we have
read some of the values so far, and that we have no idea how many values remain to be
read. Prove that we cannot afford to discard any of the values that we have read. Hint:
One proof strategy is to assume that we can discard a value, and then find values for
the unread—and therefore unknown—part of our collection that would cause the median
to be the value that we discarded.
3-2. Write a program to compute and print the quartiles (that is, the quarter of the
numbers with the largest values, the next highest quarter, and so on) of a set of
integers.
3-3. Write a program to count how many times each distinct word appears in its input.
3-4. Write a program to report the length of the longest and shortest string in its
input.
3-5. Write a program that will keep track of grades for several students at once. The
program could keep two vectors in sync: The first should hold the student's names,
and the second the final grades that can be computed as input is read. For now, you
should assume a fixed number of homework grades. We'll see in §4.1.3/56 how to
handle a variable number of grades intermixed with student names.
3-6. The average-grade computation in §3.1/36 might divide by zero if the student
didn't enter any grades. Division by zero is undefined in C++, which means that the
implementation is permitted to do anything it likes. What does your C++
implementation do in this case? Rewrite the program so that its behavior does not
depend on how the implementation treats division by zero.

*/

int question1() {
	// ask for and read the student's name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
	// ask for and read the midterm and final grades
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;
	// ask for and read the homework grades
	cout << "Enter all your homework grades, "
		"followed by end-of-file: ";
	vector<double> homework;
	double x;
	// invariant: homework contains all the homework grades read so far
	while (cin >> x)
		homework.push_back(x);
	// check that the student entered some homework grades
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "You must enter your grades. "
			"Please try again." << endl;
		return 1;
	}
	// sort the grades
	sort(homework.begin(), homework.end());
	// compute the median homework grade
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];
	// compute and write the final grade
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
	return 0;
}

int main() {
	int returnVal;
	returnVal = question1();
	cout << "question1 returned with " << returnVal << "\n";


	system("pause");
	return 0;
}