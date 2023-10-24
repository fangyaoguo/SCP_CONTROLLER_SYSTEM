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
#include "person.h"

int main()
{	

	
	PrintScreen sc;
	person pr;
	pr.ID = 1;
	pr.level = 1;
	pr.try_times = 5;
	char c[] = "123456";
	for (int a = 0; a < strlen(c); a++)pr.passwd[a] = c[a];
	char d[] = "Jack Musk";
	for (int a = 0; a < strlen(d); a++)pr.name[a] = d[a];
	char e[] = "The creator of the scp control group.";
	for (int a = 0; a < strlen(e); a++)pr.passwd[a] = e[a];
	char b[] = "/profiles/1.txt";
	pr.information_out(b);
	std::cout << "1";
	sc.print_startmenu(1);
	char a[] = "SCP CONTROL SYSTEM";
	sc.title(a);
	system("pause");
	exit(EXIT_SUCCESS);
}
