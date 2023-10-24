#include "person.h"
#include <cstdio>
#include <string.h>
bool person::information_in(char* file_name)
{
    FILE* p;
    fopen_s(&p,file_name, "r");
    if(p==NULL)return false;
    fscanf_s(p, "%hd", &ID);
    fscanf_s(p, "%s", name,10);
    getc(p);
    fscanf_s(p, "%s", passwd,73);
    fscanf_s(p, "%hd%hd", &level, &try_times);
    getc(p);
    fscanf_s(p, "%s", messages,100);
    fclose(p);
    return true;

}

bool person::information_out(char* file_name)
{
    FILE* p;
    fopen_s(&p,file_name, "w");
    if(p==NULL)return false;
    fprintf(p, "%hd\n", ID);
    fprintf(p, "%s\n", name);
    fprintf(p, "%s\n", passwd);
    fprintf(p, "%hd\n%hd\n", level, try_times);
    fprintf(p, "%s", messages);
    return true;
}

void person::try_times_reset()
{
    try_times = 5;
}

void person::try_times_reduce()
{
    try_times--;
}


// //µÇÂ¼
bool person::login(char passwd1[])
{
    if (strcmp(passwd, passwd1) == 0)
    {
		try_times_reset();
		return true;
	}
    else
    {
		try_times_reduce();
		return false;
	}
}
