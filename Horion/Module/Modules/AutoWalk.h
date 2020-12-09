#pragma once
#include "Module.h"

class AutoWalk : public IModule {
private:
	float speed = 0.325f;

public:
	AutoWalk();
	~AutoWalk();

	virtual void onMove(C_MoveInputHandler* input) override;
	virtual const char* getModuleName() override;
};
