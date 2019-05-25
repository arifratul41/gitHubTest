#include "Header.h"

using namespace std;

int main()

{
	int x;
	Box box1;

//	box1.publicFunction();
	//int x = box1.onlyFunction();
	//box1.protectedFunction();

	boxDerived box2;

	box2.boxDerivedPublic();

	cin >> x;
	return 0;
}
