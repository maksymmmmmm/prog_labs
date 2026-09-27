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
#include <math.h>

int main() {
	double a, b, c;
	
	printf("Введіть три сторони трикутника.\nВведіть a: ");
	scanf("%lf", &a);
	printf("Введіть b: ");
	scanf("%lf", &b);
	printf("Введіть c: ");
	scanf("%lf", &c);
	
	double ma, mb, mc;
	ma = sqrt((2*b*b + 2*c*c - a*a)/4);
	mb = sqrt((2*a*a + 2*c*c - b*b)/4);
	mc = sqrt((2*a*a + 2*b*b - c*c)/4);
	
	printf("Медіана a = %f, медіана b = %f, медіана c = %f\n", ma, mb, mc);
	
	return 0;
}
