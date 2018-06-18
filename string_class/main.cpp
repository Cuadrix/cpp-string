#include <iostream> /* for outputs */
#include <time.h> /* for time measuring */

#include "string.h" /* include library */
 
int main(int argc, char **argv) {
	/* str::string *a = new str::string;	// create an empty string pointer-variable */
	unsigned time = clock();
	/* 
	... do your stuff here ...
	*/
	std::cout << "Time: " << (double)(clock() - time) / CLOCKS_PER_SEC << std::endl;
	getchar();
	/* a->cleanup();		// use cleanup() instead of delete to deallocate memory of a string */
	return 0;
}