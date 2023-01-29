#include "Enemy.h"
#include<stdio.h>
#include<Windows.h>

bool Enemy::isAlive = true;

void Enemy::Initialize()
{
	printf("“G‚ğ¶¬\n");
}

void Enemy::Update()
{
	Kill();
}

void Enemy::Draw()
{
	if (isAlive)
	{
		printf("“G‚ª¶‚«‚Ä‚¢‚é\n");
	}
	else
	{
		printf("“G‚ª€‚ñ‚Å‚¢‚é\n");
	}
}

void Enemy::Kill()
{
	isAlive = false;
	printf("“G‚ª€‚ñ‚¾\n");
}