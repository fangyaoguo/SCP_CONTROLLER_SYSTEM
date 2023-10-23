#include "PrintScreen.h"
#include <windows.h>
#include <iostream>
#include <climits>
#include <vector>
#include "resource.h"
#pragma comment(lib, "winmm.lib")
using std::cout;
using std::endl;
// ��ӡһ����ʼ�˵���ͬʱ����������������
void PrintScreen::print_startmenu(bool mute)
{
     //������뻺��
    this->cls();
    this->scsize(43, 11);
    if (!mute)Beep(5000, 1000);
    this->set_clolour('2', '0'); //thisָ��PrintScreen��ĺ���
    cout << "###########################################" <<endl;
    cout << "#                                         #" <<endl;
    cout << "#           SCP CONTROL SYSTEM            #" << endl;
    cout << "#                                         #" << endl;
    cout << "#   1.login                   2.exit      #" << endl;
    cout << "#                                         #" << endl;
    cout << "#                                         #" << endl;
    cout << "#   Version beta 0.0a                     #" << endl;
    cout << "#    copyright@SCP nonprofitable company  #" << endl;
    cout << "###########################################" << endl;
    cout << ":";
}


//��������̨��ɫ
void PrintScreen::set_clolour(char front, char back)
{
    char command[9] = "color ";
    command[6] = back;
    command[7] = front;
    system(command);

}


//����
void PrintScreen::cls()
{
    system("cls");
}


// �������ڱ���
void PrintScreen::title(char tittle_name[] )
{
    std::vector <char> command = {'t','i','t','l','e',' '};
    for (int i = 0; i < strlen(tittle_name); i++)
    {
		command.push_back(tittle_name[i]);
	}
    system(command.data());
   
}

// ���ô��ڴ�С
void PrintScreen::scsize(int x, int y)
{
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT wrt = { 0, 0, x - 1, y - 1 };
    SetConsoleWindowInfo(hStdOutput, TRUE, &wrt); // ���ô���ߴ�
    COORD coord = { x, y };
    SetConsoleScreenBufferSize(hStdOutput, coord);
}

// ������ 0 ���� 1��ʾ�� 2����
bool PrintScreen::play_music(short a)
{   
    if (a == 0) { PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC | SND_LOOP); return true; }
    if (a == 1) { PlaySound((LPCTSTR)SND_ALIAS_SYSTEMSTART, NULL, SND_ALIAS_ID); return true; }
    if (a == 2) { PlaySound(NULL, NULL, SND_FILENAME); return true; }
    return false;
}
