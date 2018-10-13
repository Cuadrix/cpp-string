//#define STR_LARGESTRING             /* define this for large string allocation */
//#define STR_USE_CLEANUP_FUNCTION    /* define this to enable cleanup() function */
//#define STR_USE_BINDINGS            /* define this to enable bindings to std::basic_string, std::basic_istream and std::basic_ostream */
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

#if defined(STR_USE_BINDINGS) 
	#include <iostream>
#endif

int main(int argc, char **argv) {
	unsigned time = clock();        /* start clock */

	str::string a = "Hello world!!!!!!!!!!!!!!!";     /* create a new string object and set it to "Hello World!!!!!!!!!!!!!!!" */

	printf("a = \"%s\"\n", a.c_str());  /* output it, should say "a = "Hello World!"" */
	a.replace("Hello", "Goodbye");      /* replace "Hello" with "Goodbye" */
	printf("a = \"%s\"\n", a.c_str());  /* output it again, should print "a = "Goodbye World!"" */

#ifdef STR_USE_BINDINGS 
	std::cout << "What is your name? ";			/* I want to know your name */
	std::cin >> a;								/* saves input in str::string a */
	std::cout << "Hello " << a << "!\n";		/* Say hello */

	fflush(stdin);
	getchar();
#endif

	printf("Elapsed Time: %g seconds\n", (double)(clock() - time) / CLOCKS_PER_SEC);  /* print elapsed time */
	getchar();   /* wait for user to terminate the program */
	return 0;    /* leave the program, destroying "a", "b" and "time" automatically */
}