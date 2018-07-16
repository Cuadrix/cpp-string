#include <iostream> /* for outputs */
#include <time.h> /* for time measuring */

#include "string.h" /* include library */

int main(int argc, char **argv) {
	unsigned time = clock();
	str::string a;								// create a new, string variable
	str::string *b = new str::string;			// create a new, empty string pointer variable
	b->assign(a);								// assign a's content to "b"
	//... do your stuff here ...
	delete b;									// free memory used by b
	std::cout << "Time: " << (double)(clock() - time) / CLOCKS_PER_SEC << std::endl;
	getchar();
	return 0;
}