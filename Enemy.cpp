#include "Enemy.h"
#include<stdio.h>
#include<Windows.h>

bool Enemy::isAlive = true;

void Enemy::Initialize()
{
	printf("�G�𐶐�\n");
}

void Enemy::Update()
{
	Kill();
}

void Enemy::Draw()
{
	if (isAlive)
	{
		printf("�G�������Ă���\n");
	}
	else
	{
		printf("�G������ł���\n");
	}
}

void Enemy::Kill()
{
	isAlive = false;
	printf("�G������\n");
}