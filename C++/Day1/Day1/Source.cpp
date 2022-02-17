#include<iostream>
#include<vector>

using namespace std;

int returnEqual(int ArrayFind[], int k, int length) {
	int i = 0,j=0;
	for (; i < length; i++)
	{
		for (; j < length; j++)
		{
			if (ArrayFind[i] + ArrayFind[j] == k) {
				cout<< "Order"<<i<<":"<<ArrayFind[i]<<endl<<"Order" << j << ":"<<ArrayFind[j];
				break;
			}
		}
	}
	return 0;
}

int main() {
	int x[9] = { 1,2,3,4,5,6,7,8,9 };
	int lengtharr = sizeof(x) / sizeof(x[1]);
	returnEqual(x, 6,lengtharr);
}
