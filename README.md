# C++ - String
A simple and fast C++ string class implementation.



### [I N T R O D U C T I O N]<br>
  This library features a template class which represents an easy and lightweight implementation of an std::basic_string-like class.
  It's mainly supposed to show how an advanced string class could work. Therefore, it shouldn't be seen as an replacement of std::string but as a fast and simple alternative to it. It covers most of the std::basic_string's features, including iterators.


### [F E A T U R E S]<br>
  - easy usage
  - nice performance 
  - iterators
  - cross-platform (tested on Windows, Linux and macOS)
  - handy template usage (char, wchar_t, char16_t, char32_t)
  - C++98 compatibility 
  - bindings to std::basic_string (since Version **1.4**)
  - easy debugging using assertions (since Version **1.6**)
  - bindings to std::basic_istream and std::basic_ostream (since Version **1.8**)
  - Latest Version: **1.8**


### [F U N C T I O N S]<br>
  This library currently covers the following methods:

  | Method Name | Overload Count | Parameter Count | Return Value | Description |
  | --- | --- | --- | --- | --- |
  | assign()     | 8 | 1 - 3 | modified string object |							assign content to string													|
  | append()     | 9 | 1 - 3 | modified string object | 						append content to string													|
  | at()         | 3 | 1 - 2 | (const) T &, bool | 								returns reference to character												|
  | begin()      | 1 | 0 | iterator to the beginning |							returns iterator to the beginning											|
  | capacity()   | 1 | 0 | capacity of current allocated state |				returns string's capacity													|
  | cbegin()     | 1 | 0 | const iterator to the beginning |					returns constant iterator to the beginning									|
  | cend()       | 1 | 0 | const iterator to the ending |						returns constant iterator to the ending										|
  | cleanup()    | 1 | 0 | void |												deallocate string, use this function as a replacement of "delete"			|
  | clear()      | 1 | 0 | void |												clear string (destroy content)												|
  | compare()    | 10 | 1 - 5 | compare value |									compare string to other strings (or sequences)								|
  | copy()	     | 1 | 2 - 3 | number of chars copied |							copy chars from current string to buffer (C-Style array)					|
  | c_str()      | 1 | 0 | const string buffer |								return C-String value														|
  | data()       | 1 | 0 | string buffer |										return pointer to internal storage 											|
  | empty()      | 1 | 0 | if string is empty true, else false |				checks whether string is empty												|
  | end()        | 1 | 0 | return iterator to the ending |						returns iterator to the ending												|
  | erase()      | 2 | 1 - 2 | modified string object |							erase from string															|
  | fill()		 | 3 | 1 - 3 | modified string object |							fill string with char value 												|
  | find()       | 6 | 1 - 3 | position of sequence in string |					find within string															|
  | first()      | 2 | 0 | reference to first char |							return reference to first character											|
  | insert()     | 10 | 2 - 4 | modified string object | 						insert into string															|
  | last()       | 2 | 0 | reference to last char |								return reference to last character											|
  | length()     | 1 | 0 | length of string |									return string's length														|
  | pop_back()   | 1 | 0 - 1 | void |											erase from ending															|
  | pop_front()  | 1 | 0 - 1 | void |											erase from beginning														|
  | push_back()  | 4 | 1 | void |												append to the ending 														|
  | push_front() | 4 | 1 | void |												insert at beginning															|
  | remove()     | 2 | 1 - 2 | modified string object | 						remove specified chars														|
  | replace()    | 9 | 2 - 4 | modified string object |							replace sequences with other sequences										|
  | reserve()    | 1 | 0 - 1 | void |											allocate more memory														|
  | reset()      | 1 | 0 | void |												reset string to default settings (standard constructor)						|
  | resize()     | 2 | 1 - 2 | void | 											change length of string 													|
  | reverse()    | 2 | 0 - 2 | void |											reverse content of string													|
  | shrink()     | 1 | 0 | void |												shrink capacity till it fits with (length() + 1)							|
  | size()       | 1 | 0 | size (of string buffer) in bytes |					returns size, actual storage uses, in bytes (till null-terminator)			|
  | splice()     | 1 | 4 | modified string object |								transfer chars from current string to another string value					|
  | stod()	  	 | 1 | 0 | string as double |									returns string as double 													|
  | stof()	  	 | 1 | 0 | string as float |									returns string as float														|
  | stol()       | 1 | 0 | string as long |										returns string as long														|
  | stold()	  	 | 1 | 0 | string as long double |								returns string as long double												|
  | stoll()	  	 | 1 | 0 | string as long long |								returns string as long long													|
  | stoul()	  	 | 1 | 0 | string as unsigned long |							returns string as unsigned long												|
  | stoull()	 | 1 | 0 | string as unsigned long long |						returns string as unsigned long long										|
  | substr()     | 1 | 2 | modified string object |								generate substring															|
  | swap()       | 1 | 1 | void |												swap content of two string instances										|


### [U S A G E - E X A M P L E]<br>
```cpp
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

#ifdef STR_USE_BINDINGS 
	#include <iostream>
#endif

int main(int argc, char **argv) {
	unsigned time = clock();        /* start clock */

	str::string a = "Hello world!!!!!!!!!!!!!!!";     /* create a new string object and set it to "Hello World!" */
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
```
  
  
### [P E R F O R M A N C E]<br>
  The performance is quite good. It's on a good niveau with std::basic_string and sometimes even faster. Actually, if anyone has suggestions for better performance, please don't be shy and tell me. :)
  
  
### [C O N T R I B U T E]<br>
  Any kind of criticism is appreciated as long as it's contructive and not offensive in any way. You can give me any advices or hints to find bugs; you may also request new features or suggest better implementations of single functions. 


### [L I C E N S E]<br>
  For details about the license, please read LICENSE.md<br>
  Cheers