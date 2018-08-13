//#define STR_LARGESTRING             /* define this for large string allocation */
//#define STR_USE_CLEANUP_FUNCTION    /* define this to enable cleanup() function */
//#define STR_USE_BINDINGS            /* define this to enable bindings to std::basic_string */
#define STR_USE_ASSERTIONS          /* define this to enable assertions to debug code easier */

#include <stdio.h>  /* include this for output functions */
#include <time.h>   /* include this for time measuring */
/*
it's important that the settings
(these macros above are defined BEFORE
the library itself is included, otherwise
your settings will not work properly
*/
#include "string.h"   /* include string library */

int main(int argc, char **argv) {
	unsigned time = clock();        /* start clock */

	str::string a = "Hello world!";     /* create a new string object and set it to "Hello World!" */
	printf("a = \"%s\"\n", a.c_str());  /* output it, should say "a = "Hello World!"" */
	a.replace("Hello", "Goodbye");      /* replace "Hello" with "Goodbye" */
	printf("a = \"%s\"\n", a.c_str());  /* output it again, should print "a = "Goodbye World!"" */

	printf("Elapsed Time: %g seconds\n", (double)(clock() - time) / CLOCKS_PER_SEC);  /* print elapsed time */
	getchar();   /* wait for user to terminate the program */
	return 0;    /* leave the program, destroying "a" and "time" automatically */
}