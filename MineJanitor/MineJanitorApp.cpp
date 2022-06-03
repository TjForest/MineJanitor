#include "MineJanitorApp.h"

wxIMPLEMENT_APP(MineJanitorApp);

MineJanitorApp::MineJanitorApp()
{
}

MineJanitorApp::~MineJanitorApp()
{
}

bool MineJanitorApp::OnInit() 
{
	m_frame1 = new Main();
	m_frame1->Show();

	return true;
}