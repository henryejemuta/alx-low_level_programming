/**
 * _cprint - A C funtion that print a string
 *
 * @s: The string to print
 **/
void _cprint(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
