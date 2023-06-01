class Cal
{
public:

	int getdivide(int a, int b);
	int getZegop(int a)
	{
		return a * a;
	}

	int getGop(int a, int b)
	{
		return a * b;
	}

	int getSum(int a, int b)
	{
		return a + b;
	}
};

int Cal::getdivide(int a, int b)
{
	if (!b)
		return 0;

	return a / b;
}