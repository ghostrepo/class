#include <stdio.h>

int main()
{
	double a, f_a, b, f_b, c, f_c;
	
	printf("Use ppt for salinity values. \n");
	printf("Use degrees F for temperatures. \n");
	printf("Enter first salinity and freezing temperature: \n");
	scanf("%lf %lf", &a, &f_a);
	printf("Enter second salinity and freezing temperature: \n");
	scanf("%lf %lf", &c, &f_c);
	printf("Enter new salinity: \n");
	scanf("%lf", &b);
	
	f_b = f_a + (b - a) / (c - a) * (f_c - f_a);
	
	printf("New freezing temperature in degrees F: %4.1f \n", f_b);
	
	return 0;
}