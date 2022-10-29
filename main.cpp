#include <stdio.h>
#include<list>
#include<vector>

int main(void)
{
	//�w�ԍ�
	int num = 1;

	std::list<const char*>yamanoteLine{
		"Tokyo", "Kanda","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otsuka",
		"Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku",
		"Yoyogi","Harajuku","Shibuya","Ebisu","Meguro",
		"Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho",
		"Shimbashi","Yurakucho"
	};

	//�ꗗ��\��
	printf("1970�N�����̎R����w�ꗗ(�p�ꖼ)\n");
	for (const char* station : yamanoteLine)
	{
		printf("JY%02d:%s\n", num, station);
		station++;
	}
	printf("\n");

	//���闢�̑O�ɐ����闢��ǉ�
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
	{
		if (*itr == "Nippori")
		{
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");

			break;
		}
	}

	//�ꗗ��\��
	num = 1;
	printf("2019�N�����̎R����w�ꗗ(�p�ꖼ)\n");
	for (const char* station : yamanoteLine)
	{
		printf("JY%02d:%s\n", num, station);
		num++;
	}
	printf("\n");

	//�i��̑O�ɍ��փQ�[�g�E�F�C��ǉ�
	for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
	{
		if (*itr == "Shinagawa")
		{
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");

			break;
		}
	}

	//�ꗗ��\��
	num = 1;
	printf("2022�N�����̎R����w�ꗗ(�p�ꖼ)\n");
	for (const char* station : yamanoteLine)
	{
		printf("JY%02d:%s\n", num, station);
		num++;
	}

	return 0;
}