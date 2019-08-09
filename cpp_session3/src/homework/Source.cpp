#include <iostream>

using namespace std;

/*
C++ Session 3 Homework
1. Compile, execute, and test the programs in this chapter.

#include <iostream>

int main() {
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;

	// build the message that we intended to write
	const std::string greeting = "Hello, " + name + "!";

	// build the second and fourth line of the output
	cnst std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	// build the first and fifth lines of the output
	const std::string first(second.size(), '*');

	// write it all
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}

2. Are the following definitions valid? Why or why not?

	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

3. Are the following definitions valid? Why or why not?

	const std::string exclam = "!";
	const std::string message = "Hello" + ", world" + exclam;

4. What about this one? What if we change }} to };} in the third line from the end?

#include <iostream>

int main() {
	{ const std::string s = "a string";
	  std::cout << s << std::endl;
	{ const std::string s = "another string";
	  std::cout << s << std::endl; }}
	return 0;
}

*/

void question6() {

}


int main() {
	question6();
}