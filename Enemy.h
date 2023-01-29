#pragma once
class Enemy
{
private:

	static bool isAlive;

public:

	Enemy() = default;
	~Enemy() = default;

	/// <summary>
	/// ����������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V����
	/// </summary>
	void Update();

	/// <summary>
	/// �`�揈��
	/// </summary>
	void Draw();

private:

	/// <summary>
	/// �G���E��
	/// </summary>
	void Kill();
};