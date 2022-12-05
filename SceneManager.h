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

	//�R�s�[�R���X�g���N�^�E������Z�q�폜
	SceneManager& operator=(const SceneManager&) = delete;
	SceneManager(const SceneManager&) = delete;
};