#include "head.h"

/*
拉丁猪文字游戏——这是一个英语语言游戏。
基本规则是将一个英语单词的第一个辅音音素的字母移动到词尾并且加上后缀 - ay（譬如“banana”会变成“anana - bay”）。
*/

/*
注：辅音字母：b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z
*/

int piglatin_1()
{
	string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";//存放辅音字母的字符串
	string ad = "-ay";
	string s;
	char word = '0';
	cin >> s;
	for (int i = 0; i < s.size(); i++)//针对输入的字符串
	{
		//判断字母是否为辅音字母
		for (int j = 0; j < consonants.size(); j++)
		{
			if (s[i] == consonants[j])
			{
				word = s[i];//保存出现的第一个辅音字母
				s.erase(i, 1);//删除这个字母
				break;
			}
		}
		if (word != '0')
		{
			ad = ad.substr(0,1) + word + ad.substr(1, 2);//提取string中的部分，并且利用重载的+对字符串进行合并。
			break;
		}
	}

	s = s + ad;
	cout << s << endl;

	return 0;
}