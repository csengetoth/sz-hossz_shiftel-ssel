#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	int a=1;
	int s=1;
	while(a=a<<1)
		s++;
	cout<<s<<'\n';
	return 0;
}

