#include <stdio.h>
int main(){
int sum=0;
float num;
printf("Enter any number:\n");
scanf("%f",&num);
if(num<0){
num=-num;
}

int intpart =(int)num;
while(intpart>0){
sum=sum+intpart%10;
intpart /=10;

}

num = num-(int)num;
while(num>0){
num=num*10;
int decimalnum= (int)num;
sum=sum+decimalnum;
num=num-decimalnum;
}

}
}
