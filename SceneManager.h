#pragma once
enum class Scene
{
	Title,
	NewGame,
	GamePlay,
	GameClear
};

class SceneManager
{
public:

	void ChangeScene(int& sceneNo);
	static SceneManager* GetInstance();

private:

	SceneManager() = default;
	~SceneManager() = default;

	//コピーコンストラクタ・代入演算子削除
	SceneManager& operator=(const SceneManager&) = delete;
	SceneManager(const SceneManager&) = delete;
};