#include<stdio.h>
int main(){
	int amount;
	printf("Enter the amount:");
	scanf("%d",&amount);
	if(amount>0){
		int fifty=amount/50;
		int remf=amount%50;
		if(remf>0){
			int twenty=remf/20;
			int remt=remf%20;
			if(remt>0){
				int ten=remt/10;
				printf("%d 10s\n",ten);
			}
			printf("%d 20s \n",twenty);
		}
		printf("%d 50s\n",fifty);
	}
}
