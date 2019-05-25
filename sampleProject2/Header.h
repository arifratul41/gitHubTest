#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

class Box
{
	int len;
	int width;
private:
	int onlyFunction()
	{
		cout << "Cannnot Access From Derived Class\n";
		return 0;
	}
	void onlyFunction(int x)
	{
		cout << "Second Access Only Function\n";
	}
public:
	void publicFunction()
	{
		cout << "Accessed by everyone\n";
		onlyFunction(2);
	}
	Box()
	{
		len = 1;
		width = 1;
	}
	Box(int x, int y)
	{
		len = x;
		width = y;
	}
protected:
	void protectedFunction()
	{
		cout << "Protected Function\n";
	}

};

class bottol
{
public:
	bottol();
	~bottol();

private:
	void bottlePrivate()
	{
		cout << "Bottle Private\n";
	}


};

bottol::bottol()
{
	cout << "Bottle Constructor\n";
}

bottol::~bottol()
{
	cout << "Bottle Destructor\n";
}


class boxDerived : public Box
{
public:
	boxDerived();
	void boxDerivedPublic();
private:
	void boxDerivedPrivate();
protected:
	void boxDerivedProtected();
};

boxDerived::boxDerived()
{
	cout << "BoxDerived constructor\n";
	protectedFunction();
	
}
void boxDerived::boxDerivedPrivate()
{
	cout << "BoxDerived Private\n";
}
void boxDerived::boxDerivedProtected()
{
	cout << "Box Derived Protected\n";
}

void boxDerived::boxDerivedPublic()
{
	cout << "Box derived Public\n";
}
