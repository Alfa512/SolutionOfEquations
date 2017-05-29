#include "SM4.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>	
#include <sstream>
#include <string>

using namespace std;

unsigned int SM4::R(int a) {
	int rez[4] = { 0, };
	unsigned int c = 0;
	for (int i = 0; i < 4; i++)
	{
		int buffer1 = (a >> (i * 8)) & 0xf;
		int buffer2 = (a >> (i * 8 + 4)) & 0xf;
		rez[3 - i] = Sbox[buffer2][buffer1];
	}
	for (int i = 0; i < 4; i++) c = (c * 256 + rez[i]);
	return c;
}


unsigned int SM4::L(int a) {
	unsigned c = R(a);
	c = c ^ ((c << 2) | (c >> 30)) ^ ((c << 10) | (c >> 22)) ^ ((c << 18) | (c >> 14)) ^ ((c << 24) | (c >> 8));
	return c;
}

unsigned int SM4::L_1(int a) {
	unsigned c = R(a);
	c = c ^ ((c << 13) | (c >> 19)) ^ ((c << 23) | (c >> 9));
	return c;
}

stringstream SM4::SM4Processing() {
	int size = 100;
	Generator gen;
	gen.GenerateInputs(size);
	/*for (int i = 0; i < size; i++)
	{
	out << i << " " << crap.inBox[0][i] << crap.inBox[1][i] << crap.inBox[2][i] << crap.inBox[3][i] << endl;
	}*/
	stringstream out;
	//System::String^ out = "";
	for (int i = 0; i < 4; i++)
	{
		K[i] = MK[i] ^ FK[i];
		out << "K[" << i << "] = " << K[i] << "\r\n";
		//out += "K[" + i + "] = " + K[i] + "\r\n";
	}

	for (int i = 0; i < rounds; i++)
	{
		if (i == 0)
			rk[0] = K[0] ^ L_1(K[1] ^ K[2] ^ K[3] ^ CK[0]);
		else if (i == 1)
			rk[1] = K[1] ^ L_1(K[2] ^ K[3] ^ rk[0] ^ CK[1]);
		else if (i == 2)
			rk[2] = K[2] ^ L_1(K[3] ^ rk[0] ^ rk[1] ^ CK[2]);
		else if (i == 3)
			rk[3] = K[3] ^ L_1(rk[0] ^ rk[1] ^ rk[2] ^ CK[3]);
		else
			rk[i] = rk[i - 4] ^ L_1(rk[i - 3] ^ rk[i - 2] ^ rk[i - 1] ^ CK[i]);
		out << "rk[" << dec << i << "]" << hex << rk[i] << "\r\n";
		//out += "rk[" + i + "]" + rk[i] + "\n";
	}

	for (int m = 0; m < size; m++)
	{
		for (int i = 0; i < rounds; i++)
		{
			if (i == 0)
				X[0] = gen.inBox[0][m] ^ L(gen.inBox[1][m] ^ gen.inBox[2][m] ^ gen.inBox[3][m] ^ rk[0]);
			else if (i == 1)
				X[1] = gen.inBox[1][m] ^ L(gen.inBox[2][m] ^ gen.inBox[3][m] ^ X[0] ^ rk[1]);
			else if (i == 2)
				X[2] = gen.inBox[2][m] ^ L(gen.inBox[3][m] ^ X[0] ^ X[1] ^ rk[2]);
			else if (i == 3)
				X[3] = gen.inBox[3][m] ^ L(X[0] ^ X[1] ^ X[2] ^ rk[3]);
			else
				X[i] = X[i - 4] ^ L(X[i - 3] ^ X[i - 2] ^ X[i - 1] ^ rk[i]);
			out << "X[" << dec << i << "]" << hex << X[i] << "\r\n";
			//out += "X[" + i + "]" + X[i] + "\r\n";
		}

		for (int i = 0; i < rounds; i++)
		{
			if (i == 0)
				Y[0] = X[rounds - 1] ^ L(X[rounds - 2] ^ X[rounds - 3] ^ X[rounds - 4] ^ rk[rounds - 1]);
			else if (i == 1)
				Y[1] = X[rounds - 2] ^ L(X[rounds - 3] ^ X[rounds - 4] ^ Y[0] ^ rk[rounds - 2]);
			else if (i == 2)
				Y[2] = X[rounds - 3] ^ L(X[rounds - 4] ^ Y[0] ^ Y[1] ^ rk[rounds - 3]);
			else if (i == 3)
				Y[3] = X[rounds - 4] ^ L(Y[0] ^ Y[1] ^ Y[2] ^ rk[rounds - 4]);
			else
				Y[i] = Y[i - 4] ^ L(Y[i - 3] ^ Y[i - 2] ^ Y[i - 1] ^ rk[rounds - 1 - i]);
			out << "Y[" << dec << i << "]" << hex << Y[i] << "\r\n";
			//out += "Y[" + i + "]" + Y[i] + "\n";
		}
	}
	return out;
}