#define _CRT_SECURE_NO_WARNINGS
#include"manage.h"
void shuru(Ren* p) {
	int s = 0;
	int n = 0;
	int d;
	printf("����-1����,������������ʼ��¼");
	scanf_s("%d", &n);
	for (int  i = 0; n!=-1 ; i++)
	{
		printf("����������\n");
		scanf("%s",p[i].name);
		printf("������ְ����\n");
		scanf("%s", p[i].zhigonghao);
		printf("���������п���\n");
		scanf("%s", p[i].kahao);
		printf("������Ӧ������\n");
		scanf_s("%f", &p[i].yingfa);
		printf("������ˮ���\n");
		scanf_s("%f", &p[i].shuidian);
		printf("������˰��\n");
		scanf_s("%f", &p[i].shui);
		printf("����������۳����\n");
		scanf_s("%f", &p[i].zashu);
		printf("�����뷢�ŵ��·�\n");
		scanf_s("%d", &p[i].month);
		p[i].shiji = p[i].yingfa - p[i].shuidian - p[i].shui - p[i].zashu;
		printf("ʵ������Ϊ%lf\n", p[i].shiji);
		printf("����-1��������,����������������\n");
		scanf_s("%d", &n);
		s++;
	}
	save(yuangong, s);
	printf("������һ�������˳�������1��0");
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
		printf("�򲻿��ļ�\n");
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
	printf("������Ҫ�޸�����");
	scanf_s("%d", &newmi);
	newmi = newmi+900;
	fprintf(fp, "%d\t", newmi);
	fclose(fp);
	printf("��ѡ�񷵻���һ�������˳�������1��0\n");
	int n;
	scanf_s("%d", &n);
	if (n == 1)
		OPmenu();
	else
		exit(0);

}
