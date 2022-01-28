#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "../Libft/libft.h"

// uchar max-> 255
int	main(void)
{
	int	cnt;

	cnt = -1;
	while (cnt <= 512)
	{
		printf("cnt: %i, honke-> %i, jisaku-> %i\n",
			cnt, isalpha(cnt), ft_isalpha(cnt));
		assert(isalpha(cnt) == ft_isalpha(cnt));
		cnt++;
	}
	return (0);
}
