class Cal
{
public:
	int getdevide(int a, int b);
};

int Cal::getdevide(int a, int b)
{
	if (!b)
		return 0;

	return a / b;
}
