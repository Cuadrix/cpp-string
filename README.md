# C++ - String
A simple and fast C++ string class implementation.



### [I N T R O D U C T I O N]<br>
  This library features a template class which represents an easy and lightweight implementation of an std::basic_string-like class.
  It's mainly supposed to show how an advanced string class could work. Therefore, it shouldn't be seen as an replacement of std::string but as a fast and simple alternative to it. It covers most of the std::basic_string's features, including iterators.


### [F E A T U R E S]<br>
  - easy usage
  - nice performance 
  - iterators
  - handy template usage (char, wchar_t, char16_t, char32_t)
  - C++98 compatibility 
  - bindings to std::basic_string (since Version 1.4)


### [F U N C T I O N S]<br>
  This library covers the following methods:

  | Method Name | Overload Count | Parameter Count | Return Value | Description |
  | --- | --- | --- | --- | --- |
  | assign()     | 8 | 1 - 3 | modified string object | 
  | append()     | 9 | 1 - 3 | modified string object | 
  | at()         | 3 | 1 - 2 | (const) T &, bool | 
  | begin()      | 1 | 0 | iterator to the beginning |
  | capacity()   | 1 | 0 | capacity of current allocated state |
  | cbegin()     | 1 | 0 | const iterator to the beginning |
  | cend()       | 1 | 0 | const iterator to the ending |
  | cleanup()    | 1 | 0 | void |
  | clear()      | 1 | 0 | void |
  | compare()    | 10 | 1 - 5 | compare value |
  | c_str()      | 1 | 0 | const string buffer |
  | data()       | 1 | 0 | string buffer |
  | empty()      | 1 | 0 | if string is empty true, else false |
  | end()        | 1 | 0 | return iterator to the ending |
  | erase()      | 2 | 1 - 2 | modified string object |
  | fill()		 | 3 | 1 - 3 | modified string object |
  | find()       | 6 | 1 - 3 | position of seeked sequence within string object |
  | first()      | 2 | 0 | reference to first char |
  | insert()     | 10 | 2 - 4 | modified string object | 
  | last()       | 
  | length()     | 
  | pop_back()   | 
  | pop_front()  | 
  | push_back()  | 
  | push_front() | 
  | remove()     | 
  | replace()    | 
  | reserve()    | 
  | reset()      | 
  | resize()     | 
  | reverse()    | 
  | shrink()     | 
  | size()       | 
  | stod()	  	 | 
  | stof()	  	 | 
  | stol()       | 
  | stold()	  	 | 
  | stoll()	  	 | 
  | stoul()	  	 | 
  | stoull()	 |  
  | substr()     | 
  | swap()       |   
  
  
### [P E R F O R M A N C E]<br>
  The performance is quite good. It's on a good niveau with std::basic_string and sometimes even faster. Actually, if anyone has suggestions for better performance, please don't be shy and tell me. :)
  
  
### [C O N T R I B U T E]<br>
  Any kind of criticism is appreciated as long as it's contructive and not offensive in any way. You can give me any advices or hints to find bugs; you may also request new features or suggest better implementations of single functions. 
