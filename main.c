#include "ft_printf.h"

int	main(void)
{
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello, world!");
	ft_printf("Pointer: %p\n", &main);
	ft_printf("Decimal: %d\n", -12345);
	ft_printf("Integer: %i\n", 12345);
	ft_printf("Unsigned: %u\n", 4294967295);
	ft_printf("Hexadecimal (lower): %x\n", 255);
	ft_printf("Hexadecimal (upper): %X\n", 255);
	ft_printf("Percent: %%\n");
	return (0);
}
