// TravisExample.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	
	int x, y, z;
	std::cout << "Unesite x i y" << std::endl;
	std::cin >> x >> y;
	z = x + y;
	std::cout << "Zbir je : " << z << std::endl;
    return 0;
}

