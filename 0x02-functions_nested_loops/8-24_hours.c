#include "main.h"

/**
 * jack_bauer - print every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: always 0 for success
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
	for (minute = 0; minute < 60; minute++)
	{
		/* check if the hour is less than 10 then add a leading 0 */
		if (hour < 10)
		{
			_putchar('0');
			_putchar('0' + hour);
		}
		else
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
		}
		_putchar(':');

		/* check if the minute is less than 10 then add a leading 0 */
		if (minute < 10)
		{
			_putchar('0');
			_putchar('0' + minute);
		}
		else
		{
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
		}
		_putchar('\n');
	}
}
}
