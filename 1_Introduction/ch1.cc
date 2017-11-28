#include <iostream>
using namespace std;

struct A {
	int val;
};

struct B {
	int val;
	explicit operator bool() const {
		cout << "explicit" << endl;
		return val == 0;
	}

	/*
	operator bool() const {
		return val == 0;
	}
	*/
};

int main() {
	/* 1.2 Where we can put blanks? */
	int 
		a;	

	/*
	in
	t a; 

	#include 
	<iostream>
	*/

	/* 1.4 State of streams */
	while (cin >> a) {
		a += 1;
	}
	
	A aa;
	B bb;
	/* Compile error : can't covert aa to bool 
	if (aa)
		;
	*/
	
	/* Okey */
	if (bb)
		;
	return 0;

}
