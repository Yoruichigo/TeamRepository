/*

	SceneManager.h

*/

#pragma once


#include "CoreBasic.h"
#include "CoreSingleton.h"




class C_SceneManager :public Singleton<C_SceneManager>
{friend class Singleton<C_SceneManager>;
public:

	void Initialize();
	void Run();
	void Destroy();

protected:
	C_SceneManager(){};
	~C_SceneManager(){};



};




