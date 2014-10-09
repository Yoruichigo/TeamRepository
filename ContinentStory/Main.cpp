/*

	メインソース

*/


#include "Main.h"

#include "SceneManager.h"

SIZE WindowSize = {800,600};


int WINAPI WinMain(
	HINSTANCE hInstance,HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow )
{

	ChangeWindowMode( TRUE ) ;

	SetGraphMode(WindowSize.cx,WindowSize.cy,16) ;

	assert( DxLib_Init() == 0 );

	//Initialize
	INSTANCE_CREATE(C_SceneManager);
	C_SceneManager *Manager = INSTANCE_GET(C_SceneManager); 

	Manager->Initialize();

	while(true)
	{
		if( ProcessMessage() == -1 )
		{
			break ;
		}
		//Run
		Manager->Run();
		break;
	}

	Manager->Destroy();
	INSTANCE_DELETE(C_SceneManager);

	DxLib_End();


	return 0 ;
}


