#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	int	cnt;

	cnt = 0;
	while (cnt <= 512)
	{
		printf("cnt: %i, honke->%i, jisaku->%i\n", cnt,
			isalnum(cnt), ft_isalnum(cnt));
		assert(isalnum(cnt) == ft_isalnum(cnt));
		cnt++;
	}
	puts("OK");
	return (0);
}
