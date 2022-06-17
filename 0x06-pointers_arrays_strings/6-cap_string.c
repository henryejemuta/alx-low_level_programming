#include "main.h"

/**
 * cap_string - A C function that capitalizes
 * all words of a string.
 *
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if ((s[i] == ' ') || (s[i] == '\t')
			|| (s[i] == '\n') || (s[i] == ',')
			|| (s[i] == ';') || (s[i] == '.')
		    || (s[i] == '.') || (s[i] == '!') || (s[i] == '?')
		    || (s[i] == '"') || (s[i] == '(') || (s[i] == ')')
		    || (s[i] == '{') || (s[i] == '}'))
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
