/*
	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>

int main() {
	int a, b, c;
	
	printf("Програма для порівняння трьох чисел\n");
	printf("Введіть перше число для порівняння: ");
	scanf("%d", &a);
	printf("Введіть друге число: ");
	scanf("%d", &b);
	printf("Введіть третє число: ");
	scanf("%d", &c);
	
	printf("\n");
	
	if (a == b && b == c)
		printf("Вони усі рівні.");
	else {
		printf("Не усі три числа рівні.\n");
		if (a != b)
			printf("a не до рівнює b.\n");
		else
			printf("a дорівнює b.\n");
		if (b != c)
			printf("b не дорівнює c.\n");
		else
			printf("b дорівнює c.\n");
		if (a != c)
			printf("a не дорівнює c.\n");
		else
			printf("a дорівнює c.\n");
	}
}
