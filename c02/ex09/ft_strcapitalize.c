#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char h[] = {"Yees mais bon aq40222oui y33s"};
	printf("%s", ft_strcapitalize(h));
}
