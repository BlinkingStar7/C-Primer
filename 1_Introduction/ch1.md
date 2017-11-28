# Chapter 1. Introduction

## 1.2 Where we can put blanks?
* Almost no limit, excepts...
	* In the middle of words
	* In precompiler syntax
* No needs to put escape character

## 1.4 State of streams
* Stream is not valid when...
	* reach EOF (ctrl+Z in window, ctrl+D in other os)
	* meet unmatched type
* If states only accepts *bool, int, pointer* types
	```c++
	someClass A;
	if (A)	// Compile error
		do_something;
	```
	* iostream class has converting function (bool operator)
	* check validity of stream -> return 0 or 1

	<blockquote>
* **[Safe bool idiom](http://www.artima.com/cppsource/safebool.html)**
	* Simply convert to bool can trigger unintended error
	```c++
	A a, b;
	a <<= 1;

	if (a == b)
		do_something;
	```
	* Various technique can be used to settle down this problem.
	* However from C++11, you can use explicit operator
	</blockquote>



	

