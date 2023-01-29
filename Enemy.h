#pragma once

enum class EnemyState
{
	APPROACH,
	ATTACK,
	ESCAPE,
};

class Enemy
{
private:

	EnemyState state;

	static void (Enemy::* stateTable[])();

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
	/// �ڋ�
	/// </summary>
	void Approach();

	/// <summary>
	/// �U��
	/// </summary>
	void Attack();

	/// <summary>
	/// ���S
	/// </summary>
	void Escape();
};