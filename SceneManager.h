#pragma once
#include <Novice.h>
#include <stdlib.h>
#include "Title.h"
#include "InGame.h"
#include "Result.h"
#include "Enemy.h"
class SceneManager
{
private:
	Title* title_;
	InGame* ingame_;
	Result* result_;
	Enemy *enemy_;
	int scene_ = 0;
	float frame_;
	bool isStart_;
public:
	enum Scene
	{
		TITLE,
		GAME,
		RESULT,
	};
	int Getscene_() { return scene_; };
	float Getframe_() { return frame_; };
	bool GetisStart_() { return isStart_; };

	void SceneInit();
	void SceneUpdate(char* keys, char* preKeys);
	void SceneDraw();
};

