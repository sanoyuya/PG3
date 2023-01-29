#include"Enemy.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include<memory>

int main()
{
	std::vector<std::unique_ptr<Enemy>>enemys;

	int enemyNum = 3;

	printf("�G�̐���%d��\n", enemyNum);
	printf("\n");

	//�G�̐���
	for (int i = 0; i < enemyNum; i++)
	{
		std::unique_ptr<Enemy> enemy;
		enemy = std::make_unique<Enemy>();
		enemy->Initialize();

		enemys.push_back(std::move(enemy));
	}
	printf("\n");

	//�G�̏�ԕ\��
	for (std::unique_ptr<Enemy >& enemy : enemys)
	{
		enemy->Update();
	}
	printf("\n");

	//�G�̏�ԕ\��
	for (std::unique_ptr<Enemy >& enemy : enemys)
	{
		enemy->Update();
	}
	printf("\n");

	//�G�̏�ԕ\��
	for (std::unique_ptr<Enemy >& enemy : enemys)
	{
		enemy->Update();
	}
	printf("\n");

	enemys.clear();

	system("pause");

	return 0;
}