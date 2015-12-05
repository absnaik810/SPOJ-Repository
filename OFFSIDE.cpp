#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int A,D,i;
	
	scanf("%d %d",&A,&D);
	while(A!=0 && D!=0){
		bool isOffside=false;
		i=0;
		int B[A], C[D];
		while(i<A){
			scanf("%d",&B[i]);
			i++;
		}

		i=0;
		while(i<D){
			scanf("%d",&C[i]);
			i++;
		}
		
		std::sort(B,B+A);
		std::sort(C,C+D);

		i=0;
		if(B[i]<C[i+1])
			isOffside=true;

		if(isOffside)
			printf("Y\n");
		else
			printf("N\n");
		
	scanf("%d %d",&A,&D);
	}
	return 0;
}
