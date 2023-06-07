/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: pow
 * if y < 0 return -1
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y != 0)
	{
		pow = (x * _pow_recursion(x, y - 1));
	}
	return (pow);
}
