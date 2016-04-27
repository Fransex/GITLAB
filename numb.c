/* Program #2 */

# include <stdio.h>
# include <stdlib.h>

int main ()
{
	int i = 0;
	while(i < 12)
    {
		if (i % 2 == 0)
		{
			printf("%d - ",i);
		}
		i++;
	}
	printf("%d\n",i);
	return 0;
}