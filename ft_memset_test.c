#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../Libft/libft.h"

void	case1(void);
void	case2(void);
void	case3(void);
void	case4(void);
void	case5(void);

int	main(void)
{
	case1();
	case2();
	case3();
	case4();
//	case5();
	puts("OK");
}

void	case1(void)
{
	char	honke[] = "abcdefg";
	char	jisaku[] = "abcdefg";

	puts("----- Case1 -----");
	puts("Before");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	memset(honke, '/', sizeof(honke) - 1);
	ft_memset(jisaku, '/', sizeof(jisaku) - 1);
	puts("After");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	assert(memcmp(honke, jisaku, sizeof(honke) - 1) == 0);
}

void	case2(void)
{
	char	honke[] = "";
	char	jisaku[] = "";

	puts("----- Case2 -----");
	puts("----- b == empty -----");
	puts("Before");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	memset(honke, '/', 1);
	ft_memset(jisaku, '/', 1);
	puts("After");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	assert(memcmp(honke, jisaku, sizeof(honke)) == 0);
}

// honke performs SEGV on b == NULL len > 0
void	case3(void)
{
	char	*honke = NULL;
	char	*jisaku = NULL;

	puts("----- Case3 -----");
	puts("----- b == NULL -----");
	puts("Before");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	memset(honke, '/', 0);
	ft_memset(jisaku, '/', 0);
	puts("After");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	assert(honke == jisaku);
}

// c < 0
void	case4(void)
{
	char	honke[] = "abcdefg";
	char	jisaku []= "abcdefg";

	puts("----- Case4 -----");
	puts("----- c < 0 -----");
	puts("Before");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	memset(honke, -20, sizeof(honke) - 1);
	ft_memset(jisaku, -20, sizeof(honke) - 1);
	puts("After");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	assert(memcmp(honke, jisaku, sizeof(honke)) == 0);
}

void	case5(void)
{
	char	honke[] = "abcdefg";
	char	jisaku []= "abcdefg";

	puts("----- Case5 -----");
	puts("----- len < 0 -----");
	puts("Before");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	memset(honke, '/', -1);
	ft_memset(jisaku, '/', -1);
	puts("After");
	printf("honke->%s\t jisaku->%s\n", honke, jisaku);
	assert(memcmp(honke, jisaku, sizeof(honke)) == 0);
}
