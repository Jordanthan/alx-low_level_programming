/**
 * swap_int - Swap the value of the two intergers using pointer
 * @a: pointer
 * @b: pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
