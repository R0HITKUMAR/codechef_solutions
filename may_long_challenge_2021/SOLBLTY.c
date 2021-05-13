/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C Language | May Long Challenge 2021 (CodeChef)
Programs : Solubility (SOLBLTY)
URL : https://www.codechef.com/MAY21C/problems/SOLBLTY

**************************************************************************/
#include <stdio.h>

int main(void) {
	int i,N,X,A,B,temp,ans[1000];
	scanf("%d",&N);
	for (i=0;i<N;i++)
	{
	    scanf("%d%d%d",&X,&A,&B);
	    temp = (A + (100-X)*B)*10;
	    ans[i]=temp;

	}
	for (i=0;i<N;i++)
	{
	    printf("%d\n",ans[i]);
	}
	return 0;
}



/**************************************************************************/

