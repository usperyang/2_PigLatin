/*
拉丁猪文字游戏——这是一个英语语言游戏。
基本规则是将一个英语单词的第一个辅音音素的字母移动到词尾并且加上后缀 - ay（譬如“banana”会变成“anana - bay”）。
*/

/*
注：辅音字母：b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z
*/

#include "head.h"
//函数声明
int piglatin_1();

//测试string的用法

int test_1()//初始化string字符串
{
	string str1 = "yesterday once more";
	cout << str1 << endl;
	string str2("my heart go on");
	cout << str2 << endl;
	string str3(str1, 6);// = day once more
	cout << str3 << endl;
	string str4(str1, 6, 3);// = day
	cout << str4 << endl;

	char ch_music[] = { "Roly-Poly" };

	string str5 = ch_music;
	cout << str5 << endl;
	string str6(ch_music);
	cout << str6 << endl;
	string str7(ch_music, 4);// = Roly
	cout << str7 << endl;
	string str8(10, 'i');// = iiiiiiiiii
	cout << str8 << endl;
	string str9(ch_music + 5, ch_music + 9);// = Poly
	cout << str9 << endl;

	str9.~string();//销毁字符串，释放内存

	getchar();//读取输入的内容
	return 0;
}

//STL的接口使用
#include <algorithm>
int test_2()
{
	string str;

	str.push_back('Q');
	str.push_back('A');

	string::iterator itstr = str.begin();

	for (; itstr != str.end(); itstr++)
	{
		cout << *itstr;
	}

	sort(str.begin(), str.end());//排序

	str.pop_back();

	getchar();
	return 0;
}


int main()
{
	//test_1();
	//test_2();
	piglatin_1();
	return 0;
}