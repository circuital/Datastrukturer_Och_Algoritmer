#include <iostream>
#include <exception>

using namespace std;

int CallFunction(int num)
{
	if (num == 0)
	{
		throw invalid_argument("Num can't be 0");
	}
	return num + 1;
}

void TestMe(int num)
{
	int d = CallFunction(num);
}

int main()
{
	try 
	{
		TestMe(0);
		cout << "ok" << endl;
	}
	catch (invalid_argument& error) 
	{
		cout << error.what() << endl;
	}

	try 
	{
		TestMe(1);
		cout << "ok" << endl;
	}
	catch (invalid_argument& error) 
	{
		cout << error.what() << endl;
	}
}