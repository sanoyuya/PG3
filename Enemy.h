#pragma once
class Enemy
{
private:

	static bool isAlive;

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
	/// •`‰æˆ—
	/// </summary>
	void Draw();

private:

	/// <summary>
	/// “G‚ğE‚·
	/// </summary>
	void Kill();
};