#include <bits/stdc++.h>
#include<string.h>
using namespace std;
 

int main() {
int i; 
printf("type number of array: ");
scanf("%d",&i);
int num = i;
int test [num];
for (int i=0; i<num;i++){
	printf("array[%d] is: ",i);
	scanf("%d",&test[i]);
}
for (int s=0;s<num-1;s++){
	for(int t=s+1;t<num;t++){
		if(test[t]>test[s]){
			int tmp = test[t];
			test[t] = test[s];
			test[s] = tmp;
		}
	}
}
printf("min of number is %d",test[i-1]);
return 0;
}

