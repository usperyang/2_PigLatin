#include "head.h"

/*
������������Ϸ��������һ��Ӣ��������Ϸ��
���������ǽ�һ��Ӣ�ﵥ�ʵĵ�һ���������ص���ĸ�ƶ�����β���Ҽ��Ϻ�׺ - ay��Ʃ�硰banana�����ɡ�anana - bay������
*/

/*
ע��������ĸ��b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z
*/

int piglatin_1()
{
	string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";//��Ÿ�����ĸ���ַ���
	string ad = "-ay";
	string s;
	char word = '0';
	cin >> s;
	for (int i = 0; i < s.size(); i++)//���������ַ���
	{
		//�ж���ĸ�Ƿ�Ϊ������ĸ
		for (int j = 0; j < consonants.size(); j++)
		{
			if (s[i] == consonants[j])
			{
				word = s[i];//������ֵĵ�һ��������ĸ
				s.erase(i, 1);//ɾ�������ĸ
				break;
			}
		}
		if (word != '0')
		{
			ad = ad.substr(0,1) + word + ad.substr(1, 2);//��ȡstring�еĲ��֣������������ص�+���ַ������кϲ���
			break;
		}
	}

	s = s + ad;
	cout << s << endl;

	return 0;
}