#pragma once
class PrintScreen
{
public:
	// ��ӡһ����ʼ�˵���ͬʱ����������������
	void print_startmenu(bool mute);
	void set_clolour(char front, char back);
private:
	// //����
	void cls();
public:
	// �������ڱ���
	void title(char tittle_name[] );
	void scsize(int x, int y);
	// ������ 0
	bool play_music(short a);
};

