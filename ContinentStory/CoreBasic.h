/*

	Core

	Initialize
	Run
	Destroy

*/


#pragma once



class Core_Basic{
public:
	Core_Basic(){};
	virtual ~Core_Basic(){};

	virtual void Initialize(){};
	virtual void Run() = 0;
	virtual void Destroy(){};

};





