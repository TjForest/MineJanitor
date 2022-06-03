#pragma once

#include "wx/wx.h";
#include "Main.h";

class MineJanitorApp : public wxApp
{
public:
	MineJanitorApp();
	~MineJanitorApp();

private:
	Main* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

