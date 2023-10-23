#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <cctype>
#include <cstring>
#include <cstdio>
#include "PrintScreen.h"

int main()
{	

	
	PrintScreen sc;
	std::cout << "1";
	sc.print_startmenu(1);
	char a[] = "SCP CONTROL SYSTEM";
	sc.title(a);
	system("pause");
	exit(EXIT_SUCCESS);
}
