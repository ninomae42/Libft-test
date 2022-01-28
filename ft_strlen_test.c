#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "../Libft/libft.h"

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "";
	char	s3[] = "he\0llo";
	char	s4[] = "\0hello";
	//char	*p_null; // honke performs SEGV

	printf("[1]%s: honke->%zu, jisaku->%zu\n", s1, strlen(s1), ft_strlen(s1));
	assert(strlen(s1) == ft_strlen(s1));
	printf("[2]%s: honke->%zu, jisaku->%zu\n", s2, strlen(s2), ft_strlen(s2));
	assert(strlen(s2) == ft_strlen(s2));
	printf("[3]%s: honke->%zu, jisaku->%zu\n", s3, strlen(s3), ft_strlen(s3));
	assert(strlen(s3) == ft_strlen(s3));
	printf("[4]%s: honke->%zu, jisaku->%zu\n", s4, strlen(s4), ft_strlen(s4));
	assert(strlen(s4) == ft_strlen(s4));
	puts("OK");
}
