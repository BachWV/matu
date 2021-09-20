int ReverseArray(int array[], int size)
{
	if (size <= 0)
	{
		return 0;
	}
	int temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}
	return 1;
}