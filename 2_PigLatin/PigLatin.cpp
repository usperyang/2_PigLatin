/*
������������Ϸ��������һ��Ӣ��������Ϸ��
���������ǽ�һ��Ӣ�ﵥ�ʵĵ�һ���������ص���ĸ�ƶ�����β���Ҽ��Ϻ�׺ - ay��Ʃ�硰banana�����ɡ�anana - bay������
*/

/*
ע��������ĸ��b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z
*/

#include "head.h"
//��������
int piglatin_1();

//����string���÷�

int test_1()//��ʼ��string�ַ���
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

	str9.~string();//�����ַ������ͷ��ڴ�

	getchar();//��ȡ���������
	return 0;
}

//STL�Ľӿ�ʹ��
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

	sort(str.begin(), str.end());//����

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