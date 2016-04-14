#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	string h = "41424344";
	string g1 = "";
	string g2 = "";
	char g[] = "_";
	char tab2[5];
	for (int i = 0; i < h.length(); i = i + 2)
	{
		g2 = "0x" + h.substr(i, 2);
		strcpy_s(tab2, g2.c_str());
		sprintf_s(g, "%c", strtol(tab2, NULL, 16));
		g1 += g;
	}
    	cout << g1 << endl;
	char c = getchar();
}
