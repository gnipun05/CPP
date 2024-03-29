// Space optimized C++ implementation of LCS problem
#include<bits/stdc++.h>
using namespace std;

int lcs(string &X, string &Y)
{
	int m = X.length(), n = Y.length();

	int L[2][n + 1]; // or one may even use two seperate vectors (though then the rest of the code will become a little complicated to implement)
	bool bi;

	for (int i = 0; i <= m; i++){
		bi = i & 1;

		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				L[bi][j] = 0;

			else if (X[i-1] == Y[j-1])
				L[bi][j] = L[1 - bi][j - 1] + 1;

			else
				L[bi][j] = max(L[1 - bi][j],
							L[bi][j - 1]);
		}
	}
	return L[bi][n];
}

int main(){
	string X = "AGGTAB";
	string Y = "GXTXAYB";
	printf("Length of LCS is %d\n", lcs(X, Y));
	return 0;
}
