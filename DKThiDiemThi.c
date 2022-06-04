#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, m, diem;
	float l, k, f, LT, TH, BTL;
	char monhoc[20];
	printf("Nhap so mon hoc: ");
	scanf("%d",&n);
	
	int count = 1;
	while(count<=n)
	{
		printf("Nhap Ten Mon Hoc: ");
		fflush(stdin);
		scanf("%s",&monhoc);
		printf("Nhap So buoi hoc: ");
		fflush(stdin);
		scanf("%d",&m);
		printf("Nhap so buoi nghi hoc: ");
		fflush(stdin);
		scanf("%f",&l);
		k = l/m*100;
		if(k>=25)
			{
			printf("So buoi nghi hoc: %.1f%%\n",k);
			printf("Ban Phai hoc lai mon %s\n",monhoc);
			}
		else
			{
				printf("So buoi nghi hoc: %.1f%%\n",k);
				printf("Nhap diem LT mon %s: ",monhoc);
				scanf("%f",&LT);
				printf("Nhap diem TH mon %s: ",monhoc);
				scanf("%f",&TH);
				printf("Nhap diem BTL mon %s: ",monhoc);
				scanf("%f",&BTL);
				if(LT<=8)
					printf("Ban phai thi lai LT mon %s\n",monhoc);
				else
					printf("Ban Da Dat LT mon %s\n",monhoc);
				if(TH<=6)
					printf("Ban phai thi lai TH mon %s\n",monhoc);
				else
					printf("Ban Da Dat TH mon %s\n",monhoc);
				if(BTL<=4)
					printf("Ban phai thi lai BTL mon %s\n",monhoc);
				else
					printf("Ban Da Dat BTL mon %s\n",monhoc);
			}
		count++;
	}
	
	return 0;
}
