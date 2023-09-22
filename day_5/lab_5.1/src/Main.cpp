#include<cstdio>



void update (int *a,int *b){

	int sum = *a + *b;
	int substract;
	if(*a > *b){

		substract = *a - *b;
	}
	else{
		substract = *b - *a;
	}
	*a = sum;
	*b = substract;
}

int main (){

	int a,b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a,&b);
	update (pa,pb);
	printf("%d\n%d", a,b);

	return 0;
}


