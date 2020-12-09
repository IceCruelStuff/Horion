#include "AutoWalk.h"

AutoWalk::AutoWalk() : IModule(0, Category::MOVEMENT, "Automatically walk without pressing the key") {
	registerFloatSetting("speed", &this->speed, this->speed, 0.1f, 1.f);
}

AutoWalk::~AutoWalk() {
}

const char* AutoWalk::getModuleName() {
	return "AutoWalk";
}

void AutoWalk::onMove(C_MoveInputHandler* input) {
	auto player = g_Data.getLocalPlayer();
	float calcYaw = (player->yaw + 90) * (PI / 180);
	player->velocity.x = cos(calcYaw) * speed;
	player->velocity.z = sin(calcYaw) * speed;
}
