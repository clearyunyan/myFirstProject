#define _CRT_SECURE_NO_WARNINGS
#include"manage.h"
void shuru(Ren* p) {
	int s = 0;
	int n = 0;
	int d;
	printf("输入-1结束,输入其他数开始记录");
	scanf_s("%d", &n);
	for (int  i = 0; n!=-1 ; i++)
	{
		printf("请输入姓名\n");
		scanf("%s",p[i].name);
		printf("请输入职工号\n");
		scanf("%s", p[i].zhigonghao);
		printf("请输入银行卡号\n");
		scanf("%s", p[i].kahao);
		printf("请输入应发工资\n");
		scanf_s("%f", &p[i].yingfa);
		printf("请输入水电费\n");
		scanf_s("%f", &p[i].shuidian);
		printf("请输入税金\n");
		scanf_s("%f", &p[i].shui);
		printf("请输入杂项扣除金额\n");
		scanf_s("%f", &p[i].zashu);
		printf("请输入发放的月份\n");
		scanf_s("%d", &p[i].month);
		p[i].shiji = p[i].yingfa - p[i].shuidian - p[i].shui - p[i].zashu;
		printf("实发工资为%lf\n", p[i].shiji);
		printf("输入-1结束输入,输入其他继续输入\n");
		scanf_s("%d", &n);
		s++;
	}
	save(yuangong, s);
	printf("返回上一级或者退出，输入1或0");
	scanf("%d", &d);
	if (d == 1)
		OPmenu();
	else
		exit(0);
}
void save(Ren *p, int n)
{
	FILE* fp;
	int count = 0;
	if ((fp = fopen("yuangong.txt","a"))==NULL)
	{
		printf("打不开文件\n");
		exit(0);
	}
	for (int i = 0; i < n; i++)
	{
		fprintf(fp,"%s %s %s %d %f %f %f %f %f\n",p[i].name,p[i].zhigonghao,p[i].kahao,p[i].month,p[i].yingfa,p[i].shuidian,p[i].shui,p[i].zashu,p[i].shiji);
		count++;
	}
	fclose(fp);
}
void chOPmi() {
	system("cls");
	FILE* fp;
	int newmi;
	fp = fopen("opmm.txt", "w");
	printf("请输入要修改密码");
	scanf_s("%d", &newmi);
	newmi = newmi+900;
	fprintf(fp, "%d\t", newmi);
	fclose(fp);
	printf("请选择返回上一级或者退出，输入1或0\n");
	int n;
	scanf_s("%d", &n);
	if (n == 1)
		OPmenu();
	else
		exit(0);

}
