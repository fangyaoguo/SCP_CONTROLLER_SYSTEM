#pragma once
class PrintScreen
{
public:
	// 打印一个开始菜单，同时清空输入输出缓冲区
	void print_startmenu(bool mute);
	void set_clolour(char front, char back);
private:
	// //清屏
	void cls();
public:
	// 更换窗口标题
	void title(char tittle_name[] );
	void scsize(int x, int y);
	// 放音乐 0
	bool play_music(short a);
};

