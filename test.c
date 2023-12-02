
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// typedef struct test
// {
//     int data;
//     struct test *next;
// } test,c;

// int main(int argc, char const *argv[])
// {
//     // c.
//     // test *head;
//     // test *one = NULL;
//     // test *two = NULL;
//     // test *three = NULL;


//     // one = malloc(sizeof(test));
//     // two = malloc(sizeof(test));
//     // three = malloc(sizeof(test));


//     // one->data = 1;
//     // two->data = 2;
//     // three->data=3;

//     // one->next = two;
//     // two->next = three;
//     // three->next = NULL;
//     // head = one;
//     // while (head)
//     // {
//     //     printf("%d\n",head->data);
//     //     head = head->next;
//     // }
//     // return 0;
//     char *t = "a";
//     char *t1 = "c";
    
//     printf("%d\n",strncmp(t,t1,2));
//     printf("%d\n",memcmp("c","a",2));
//     // printf("%d\n",4294967295);
// }
static long	ft_result(const char *str, int i, int sing)
{
	long	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * 10 + str[i] - 48 < result)
		{
			if (sing == -1)
				return (0);
			else
				return (-1);
		}
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int		sing;
	int		i;
	long	result;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sing *= -1;	
	if (str[i] == '-' || str[i] == '+')
		i++;
	result = ft_result(str, i, sing);
	return (result * sing);
}
int main()
{
    printf("%d\n",ft_atoi("   -9223372036854775807"));
    printf("%d\n",atoi("-9223372036854775807"));
    printf("%d",-9223372036854775807);	

	printf("aaadsgdgdfgdfgdfgfdgl;fkgdfgf;dgjdflkgjdfl;gjfdgkljfgjfgjgdfjgkdfgfdgfgkdfga");
	// while (1)
	// {
	
	// }
	
   
}