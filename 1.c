#include <stdio.h>

int main(){
	int i,n,num;
	char *str1,*str2;
	scanf("%d",&n);
	for (i=n;i>=1;i--){
		scanf("%s  %s",&str1,&str2);
		if (str1==str2)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
