#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char t[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, t, 59);
	return (1);
}
