// Problem1-1-2_AreaOfRectangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	double length;
	scanf("%lf", &length);
	double width;
	scanf("%lf", &width);
	if (length > 0. && width > 0.)
	{
		double area = length * width;
		printf("%lf", area);
	}
    return 0;
}

