#pragma once
#include <cstdio>
class person
{
public:
	short ID;
	char name[10];
	char passwd[73];
	short level;
	short try_times;
	char messages[100];

	bool information_in(char* file_name);
	bool information_out(char* file_name);
	void try_times_reset();
	void try_times_reduce();
	// //µÇÂ¼
	bool login(char passwd1[]);
};

