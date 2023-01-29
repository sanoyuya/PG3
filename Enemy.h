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
	/// ‰Šú‰»ˆ—
	/// </summary>
	void Initialize();

	/// <summary>
	/// XVˆ—
	/// </summary>
	void Update();

	/// <summary>
	/// Ú‹ß
	/// </summary>
	void Approach();

	/// <summary>
	/// UŒ‚
	/// </summary>
	void Attack();

	/// <summary>
	/// “¦–S
	/// </summary>
	void Escape();
};