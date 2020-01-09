#include <iostream>

using namespace std;
/*
int Fib(int i)

{
	int value = 0;
	if (i < 1) return 0;
	if (i == 1) return 1;
	return Fib(i - 1) + Fib(i - 2);
}
*/
int main()

{
/*
	int i = 0;
	while (i < 100)
	{
		cout << Fib(i) << endl;
		i++;
	}
	return 0;

*/
	int i = 0;
	int x = 2;
	while (i < 100)
	{
		x = (x - 1) + (x - 2);
			cout << x << endl;
			i++;
	}

}



