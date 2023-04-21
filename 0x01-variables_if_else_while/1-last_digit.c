/**
 * main - Prints the last digit ofa randomly generated number
 * and whether it is greater tahn 5, less than 6, or 0
 * Return : always 0
 */
int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10 ) > 5)
	{
		printf("if the last digit of n is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10 ) < 6 && (n % 10 ) != 0)
	{	
		printf("if the last digit of %d is %d and is less than 6 and not 0 \n",
				n, n % 10);
	}
	else 
	{
		printf("if the last digit of %d is %d and is 0\n",
			       n, n % 10);
	}

	return (0);



