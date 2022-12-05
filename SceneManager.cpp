#include "SceneManager.h"
#include"DxLib.h"

void SceneManager::ChangeScene(int& sceneNo)
{
	switch (static_cast<Scene>(sceneNo))
	{
	case Scene::Title:

		sceneNo = static_cast<int>(Scene::NewGame);

		break;

	case Scene::NewGame:

		sceneNo = static_cast<int>(Scene::GamePlay);

		break;

	case Scene::GamePlay:

		sceneNo = static_cast<int>(Scene::GameClear);

		break;

	case Scene::GameClear:

		sceneNo = static_cast<int>(Scene::Title);

		break;
	}
}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;
	return &instance;
}