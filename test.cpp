#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LiuJianTaoFunction(){
	printf("ljt is already\n");
}
void cat(){
}
int main(int argv,char *args[]){
	char name[20];
	scanf("%s",name);
	if(!strcmp(name,"ljt")){
		LiuJianTaoFunction();
	}else{
		printf("hello world\n");
	}
	cat();
}

