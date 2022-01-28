#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	int	cnt;

	cnt = 0;
	while (cnt <= 255)
	{
		printf("cnt: %i, honke->%i, jisaku->%i\n", cnt,
			isascii(cnt), ft_isascii(cnt));
		assert(isascii(cnt) == ft_isascii(cnt));
		cnt++;
	}
	puts("OK");
	return (0);
}
