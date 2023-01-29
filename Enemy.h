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
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	/// <summary>
	/// 接近
	/// </summary>
	void Approach();

	/// <summary>
	/// 攻撃
	/// </summary>
	void Attack();

	/// <summary>
	/// 逃亡
	/// </summary>
	void Escape();
};