#include"manage.h"
int duqu(Ren* p) {
	FILE* fp;
	int i=0;
	if ((fp = fopen("yuangong.txt", "r")) == NULL) {
		printf("找不到文件");
			exit(0);
	}
	while (fscanf(fp, "%s %s %s %d %f %f %f %f %f", p[i].name, p[i].zhigonghao, p[i].kahao,&p[i].month,&p[i].yingfa,&p[i].shuidian,&p[i].shui,&p[i].zashu,&p[i].shiji) != EOF) {
		i++;
	}
	fclose(fp);
	return i;
}
void nameRead()
{
	int i=0,n;
	Ren t;
	system("cls");
	printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "姓名", "职工号", "应发工资", "水电费", "税金", "杂项扣款", "实发工资", "发放月份");
	n = duqu(du);
	for (i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (strcmp(du[i].name, du[j].name) > 0) {
				t = du[i];
				du[i] = du[j];
				du[j] = t;
			}
		}

	}

	for (i = 0; i < n; i++)
		printf("%-16s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", du[i].name, du[i].zhigonghao, du[i].yingfa, du[i].shui, du[i].shui, du[i].zashu, du[i].shiji, du[i].month);
	printf("请选择返回上一级或者退出，输入1或0\n");
	int s=0;
	scanf_s("%d", &s);
	if (s == 1)
		lookMenu();
	else
		exit(0);

}
void kaRead() 
{
	
		int i = 0, n;
		Ren t;
		system("cls");
		printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "卡号","职工号","应发工资","水电费","税金","杂项扣款","实发工资","发放月份");
		n = duqu(du);
		for (i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++) {
				if (strcmp(du[i].kahao, du[j].kahao) > 0) {
					t = du[i];
					du[i] = du[j];
					du[j] = t;
				}
			}

		}
		for (i = 0; i < n; i++)
		printf("%-16s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", du[i].kahao, du[i].zhigonghao, du[i].yingfa, du[i].shui, du[i].shui, du[i].zashu, du[i].shiji, du[i].month);
		printf("请选择返回上一级或者退出，输入1或0\n");
		int s = 0;
		scanf_s("%d", &s);
		if (s == 1)
			lookMenu();
		else
			exit(0);
}
void nameSeek() {
	char str[20];
	Ren linshidu[1000];
	int n = 0;
	int a = 1;
	system("cls");
	while (a == 1) {
		system("cls");
		printf("请输入你要查询的员工的姓名\n");
		scanf("%s", str);
		int c = 0;
		n = duqu(linshidu);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(str, linshidu[i].name) == 0)
			{
				if (c == 0)printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "姓名", "卡号", "职工号", "应发工资", "水电费", "税金", "杂项扣款", "实发工资", "发放月份");
				printf("%-16s%-12s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", linshidu[i].name, linshidu[i].kahao, linshidu[i].zhigonghao, linshidu[i].yingfa, linshidu[i].shui, linshidu[i].shui, linshidu[i].zashu, linshidu[i].shiji, linshidu[i].month);
				c++;
			}

		}
		if (c == 0)printf("很抱歉,没用找到有关您的信息\n");
		printf("请选择继续查询或返回上一级,请输入1或0\n");
		scanf_s("%d", &a);
	}
		chaxunmenu();
	
}
void nameSeek1() {
	system("cls");
	char str[20];
	Ren linshidu[1000];
	int n = 0;
	int a = 1;
	while (a == 1) {
		system("cls");
		printf("请输入你要查询的员工的姓名\n");
		scanf("%s", str);
		int c = 0;
		n = duqu(linshidu);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(str, linshidu[i].name) == 0)
			{
				if (c == 0)printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "姓名", "卡号", "职工号", "应发工资", "水电费", "税金", "杂项扣款", "实发工资", "发放月份");
				printf("%-16s%-12s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", linshidu[i].name, linshidu[i].kahao, linshidu[i].zhigonghao, linshidu[i].yingfa, linshidu[i].shui, linshidu[i].shui, linshidu[i].zashu, linshidu[i].shiji, linshidu[i].month);
				c++;
			}

		}
		if (c == 0)printf("很抱歉,没用找到有关您的信息\n");
		printf("请选择继续查询或返回上一级,请输入1或0\n");
		scanf_s("%d", &a);
	}
	chaxunmenu1();

}
void kaSeek() {
	char str[20];
	Ren linshidu[1000];
	int n = 0;
	int c = 0;int a=1;
	system("cls");
	while (a == 1) {
		system("cls");
		printf("请输入你要查询的员工的卡号\n");
		scanf("%s", str);
		n = duqu(linshidu);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(str, linshidu[i].kahao) == 0)
			{
				if (c == 0)printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "姓名", "卡号", "职工号", "应发工资", "水电费", "税金", "杂项扣款", "实发工资", "发放月份");
				printf("%-16s%-12s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", linshidu[i].name, linshidu[i].kahao, linshidu[i].zhigonghao, linshidu[i].yingfa, linshidu[i].shui, linshidu[i].shui, linshidu[i].zashu, linshidu[i].shiji, linshidu[i].month);
				c++;
			}

		}
		if (c == 0)printf("很抱歉,没用找到有关您的信息\n");
		printf("请选择继续查询或返回上一级,请输入1或0\n");
		scanf_s("%d", &a);
	}
		chaxunmenu();
}
void kaSeek1() {
	char str[20];
	Ren linshidu[1000];
	int n = 0;
	int c = 0; int a = 1;
	system("cls");
	while (a == 1) {
		system("cls");
		printf("请输入你要查询的员工的卡号\n");
		scanf("%s", str);
		n = duqu(linshidu);
		for (int i = 0; i < n; i++)
		{
			if (strcmp(str, linshidu[i].kahao) == 0)
			{
				if (c == 0)printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "姓名", "卡号", "职工号", "应发工资", "水电费", "税金", "杂项扣款", "实发工资", "发放月份");
				printf("%-16s%-12s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", linshidu[i].name, linshidu[i].kahao, linshidu[i].zhigonghao, linshidu[i].yingfa, linshidu[i].shui, linshidu[i].shui, linshidu[i].zashu, linshidu[i].shiji, linshidu[i].month);
				c++;
			}

		}
		if (c == 0)printf("很抱歉,没用找到有关您的信息\n");
		printf("请选择继续查询或返回上一级,请输入1或0\n");
		scanf_s("%d", &a);
	}
	chaxunmenu1();
}