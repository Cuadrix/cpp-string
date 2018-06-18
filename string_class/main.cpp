#include <iostream> /* for outputs */
#include <time.h> /* for time measuring */

#include "string.h" /* include library */

int main(int argc, char **argv) {
	unsigned time = clock();
	/*
	str::string a = "Hello world!";				// create a new string variable and set it to "Hello world!"
	str::string *b = new str::string;			// create a new, empty string pointer variable
	b->assign(a);								// assign a's content to "b"
	... do your stuff here ...
	b->cleanup();								// use cleanup() instead of "delete" operator to deallocate string 
	*/
	std::cout << "Time: " << (double)(clock() - time) / CLOCKS_PER_SEC << std::endl;
	getchar();
	return 0;
}