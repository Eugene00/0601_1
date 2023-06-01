class Cal
{
public:
	int getdivide(int a, int b);
};

int Cal::getdivide(int a, int b)
{
	if (!b)
		return 0;

	return a / b;
}
