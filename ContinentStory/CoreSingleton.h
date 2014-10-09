/*

	ƒVƒ“ƒOƒ‹ƒgƒ“Core

*/


#pragma once


#define INSTANCE_GET(x)		(&x::GetInstance())
#define INSTANCE_CREATE(x)	(x::CreateInstance())
#define INSTANCE_DELETE(x)	(x::DeleteInstance())


template<class T>
class Singleton{
public:
	static inline T &GetInstance(){
		return *Instance;
	}

	static inline bool CreateInstance(){
		if(Instance == nullptr){Instance = new T();return true;}
		else{return false;}
	}

	static inline bool DeleteInstance(){
		if(Instance != nullptr){delete Instance;return true;}
		else{return false;}
	}

protected:
	Singleton(){};
	virtual ~Singleton(){};

private:

	static T *Instance;

};

template<class T>
T *Singleton<T>::Instance;






