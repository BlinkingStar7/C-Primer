# Ch2. Variables and Primitive Types

## 2.2 Miscellaneous facts
* Non printable control characters
	* use \000 format(oct number) or \x000(hex number)

* Adjancing two strings with white spaces in between can be merged
* Or you can use escape character to split lines
	* Even you can stretch a word into several line using '\\'
	```c++
	std::cou\
	t << "Hello \
	world" << std::endl;
	```
	* But it won't ignore preceding whitespaces on next line

## 2.3 Variables
* C++ is statically typed language: check types in compile time
* **Initialize**
	* Assignment and Initialization is different
	* Initialization only happens when variables are created
	* **copy-initialization and direct-initialization**
	```c++
	int ival(1024);	// direct
	int ival = 1024; // copy
	```
	* When it comes to initialize class variables, you must use direct initialziation
	* Can use variables rightafter initialized
	```c++
	string a("abc"), b=a+"de";
	```
>
* **Definition and Declaration**
	* Definition
		* Allocate memory(always), can be initialized(optional)
		* Even *extern* keyword with value is definition
		```c++
		extern double pi = 3.14;	// Definition
		double pi;					// Compile error.
		```



