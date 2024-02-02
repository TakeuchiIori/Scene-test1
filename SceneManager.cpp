#include "SceneManager.h"
void SceneManager::SceneInit() {
	title_ = new Title;
	ingame_ = new InGame;
	result_ = new Result;
	enemy_ = new Enemy;
	title_->SetInit();
	ingame_->SetInit();
	result_->SetInit();
	frame_ = 0.0f;
	isStart_ = false;
}

void SceneManager::SceneUpdate(char *keys,char *preKeys)
{
	switch (scene_)
	{
	case SceneManager::TITLE:
		title_->SetUpdate();
		ingame_->SetInit();
		if (keys[DIK_SPACE] && preKeys[DIK_SPACE] != 0) {
			isStart_ = true;
		}
		if (isStart_ == true) {
			frame_++;
			if (frame_ >= 60) {
				scene_ = GAME;
				frame_ = 0.0f;
				isStart_ = false;
			}
		}
		break;
	case SceneManager::GAME:
		title_->SetInit();
		ingame_->SetUpdate();
		if (keys[DIK_R]) {
			scene_ = TITLE;
		}

	
		break;
	case SceneManager::RESULT:
		result_->SetUpdate();
		break;
	default:
		break;
	}
}

void SceneManager::SceneDraw()
{
	switch (scene_)
	{
	case SceneManager::TITLE:
		title_->SetDraw();
		break;
	case SceneManager::GAME:
		ingame_->SetDraw();
		break;
	case SceneManager::RESULT:
		result_->SetDraw();
		break;
	default:
		break;
	}

}



