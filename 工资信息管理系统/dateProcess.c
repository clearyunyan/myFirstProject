#include"manage.h"fprintf(fin, "%s %s %s %d %f %f %f %f %f\n", p[i].name, p[i].zhigonghao, p[i].kahao, p[i].month, p[i].yingfa, p[i].shuidian, p[i].shui, p[i].zashu, p[i].shiji);
void yuancount() {
	char na[20];
	int a[12];
	int b = 0;
	int c = 0;
	float s = 0;
	int i = 0;
	int pan = 1;
	system("cls");
	while (pan == 1) {
		c = 0;
		s = 0;
		system("cls");
		printf("��������������\n");
		scanf("%s", na);
		printf("����-1���������ʼ��¼��Ҫͳ�Ƶ��·�");
		scanf_s("%d", &b);
		for (i = 0; b != -1; i++)
		{
			printf("������Ҫͳ�Ƶ��·�\n");
			scanf("%d", &a[i]);
			printf("����-1����,�������������������·�");
			scanf_s("%d", &b);
			c++;
		}
		int n = 0;
		Ren lin[1000];
		n = duqu(lin);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < c; j++)
			{
				if ((strcmp(na, lin[i].name) == 0) && (lin[i].month == a[j]))
				{
					s += lin[i].shiji;
				}

			}

		}
		printf("���⼸���µĹ����ܺ�Ϊ%.2f(Ϊ0������δ�ҵ�������Ϣ,������������)\n", s);
		printf("��ѡ������ͳ�ƻ򷵻���һ������1��0\n");
		scanf("%d", &pan);
	}
		yuanMenu();

}
void opgai()
{
	system("cls");
	FILE* fin;
	int a = 1;
	int n = 0;
	char na[20];
	Ren lin[1000];
	n = duqu(lin);
	while (a == 1) {
		int s = 0;
		system("cls");
		printf("��������Ҫ�޸ĵ����ݵ�Ա��������\n");\
		scanf("%s", na);
		fin = fopen("yuangong.txt", "w");
		for (int i = 0; i < n; i++)
		{
			if (strcmp(na, lin[i].name) == 0) {
				printf("�����������µ����п���,ְ����\n");
				scanf("%s%s", lin[i].kahao, lin[i].zhigonghao);
				printf("������������Ӧ������,ˮ��,˰��,����ۿ�,�����·�(ÿ����һ������һ�λس�)\n");
				scanf("%f%f%f%f%d", &lin[i].yingfa, &lin[i].shuidian, &lin[i].shui, &lin[i].zashu, &lin[i].month);
				lin[i].shiji = lin[i].yingfa - lin[i].shui - lin[i].shuidian - lin[i].zashu;
				printf("������ʵ������Ϊ%f", lin[i].shiji);
				s++;
			}
			fprintf(fin, "%s %s %s %d %f %f %f %f %f\n", lin[i].name, lin[i].zhigonghao, lin[i].kahao, lin[i].month, lin[i].yingfa, lin[i].shuidian, lin[i].shui, lin[i].zashu, lin[i].shiji);
		}
		fclose(fin);
		if (s != 0)printf("�޸ĳɹ�\n");
		else printf("δ�ҵ�Ҫ�޸ĵĶ���");
		printf("��ѡ������޸Ļ򷵻���һ��,����1��0\n");
		scanf("%d", &a);
	}
	dcMenu();
}
void opshan() {
	system("cls");
	FILE* fin;
	int a = 1;
	int n = 0;
	char na[20];
	Ren lin[1000];
	n = duqu(lin);
	while (a == 1) {
		int s = 0;
		int p = 0;
		system("cls");
		printf("��������Ҫɾ�������ݵ�Ա�������ֺ��·�\n");
		scanf("%s%d", na,&p);
		fin = fopen("yuangong.txt", "w");
		for (int i = 0; i < n; i++)
		{
			if (strcmp(na, lin[i].name) == 0&&p==lin[i].month) {
				s++;
				continue;
			}
			fprintf(fin, "%s %s %s %d %f %f %f %f %f\n", lin[i].name, lin[i].zhigonghao, lin[i].kahao, lin[i].month, lin[i].yingfa, lin[i].shuidian, lin[i].shui, lin[i].zashu, lin[i].shiji);
		}
		fclose(fin);
		if (s != 0)printf("ɾ���ɹ�\n");
		else printf("δ�ҵ�Ҫɾ���Ķ���");
		printf("��ѡ�����ɾ���򷵻���һ��,����1��0\n");
		scanf("%d", &a);
	}
	dcMenu();
}
void opcount()
{
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  ѡ�����               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��1��   ͳ��Ա����д���ļ�       *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��2     �����������д����ļ�   *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��3:    ������һ��               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��4:    �˳�����                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: { 
		char na[20];
		int a[12];
		int b = 0;
		int c = 0;
		float s = 0;
		int i = 0;
		int pan = 1;
		system("cls");
		while (pan == 1) {
			s = 0;
			c = 0;
			FILE* fp;
			fp = fopen("gongzizong.txt", "a");
			system("cls");
			printf("�������Ա��������\n");
			scanf("%s", na);
			printf("����-1���������ʼ��¼��Ҫͳ�Ƶ��·�");
			scanf_s("%d", &b);
			for (i = 0; b != -1; i++)
			{
				printf("������Ҫͳ�Ƶ��·�\n");
				scanf("%d", &a[i]);
				printf("����-1����,�������������������·�");
				scanf_s("%d", &b);
				c++;
			}
			int n = 0;
			Ren lin[1000];
			n = duqu(lin);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < c; j++)
				{
					if ((strcmp(na, lin[i].name) == 0) && (lin[i].month == a[j]))
					{
						s += lin[i].shiji;
					}

				}

			}
			printf("��Ա���⼸���µĹ����ܺ�Ϊ%.2f(Ϊ0������δ�ҵ���Ա������Ϣ,������������)\n", s);
			fprintf(fp,"%s ",na);
			fprintf(fp, "%.2f\t ", s);
			for(int i=0;i<c;i++)
			fprintf(fp, "%d ",a[i]);
			char ch = '\n';
			fputc(ch, fp);
			
			printf("��ѡ�����ͳ�ƻ򷵻���һ������1��0\n");
			scanf("%d", &pan);
			fclose(fp);
		}
		opcount();
		break;
	}
	case 2: countliulan(); break;
	case 3: processMenu(); break;
	case 4: exit(0); break;
	}
}
void opsort()
{
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  ѡ�����               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��1��   ��������д���ļ�       *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��2     �����д����ļ�         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��3:    ������һ��               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��4:    �˳�����                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n) 
	{
	case 1:writepai(); break;
	case 2:readpai(); break;
	case 3:processMenu(); break;
	case 4:exit(0); break;
	}
	opsort();
}
void countliulan() 
{
	FILE* fp;
	int pan = 5;
	if ((fp = fopen("gongzizong.txt", "r")) == NULL) 
	{
		printf("�Ҳ���ͳ�Ƽ�¼����������");
		exit(0);
	}
	printf("��ͳ�Ƶ�Ա������:\n");
	printf("����   �����ܺ�   ͳ�Ƶ��·�\n");
	char ch;
	ch = fgetc(fp);
	while (ch != EOF) {
		printf("%c", ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	printf("��ѡ��Ż���һ�����˳�,����1��0\n");
	scanf("%d", &pan);
	if (pan == 1)
		opcount();
	else
		exit(0);
}
void writepai() {
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  ѡ�����               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��1��   �����ʿ�������д���ļ�   *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��2     ��ʵ�����ʽ���д���ļ�   *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��3:    ������һ��               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��4:    �˳�����                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n) 
	{
	case 1: 
	{
		Ren lin[1000];
		Ren t;
		int n = duqu(lin);
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i + 1; j < n ; j++) {
				if (strcmp(lin[i].kahao, lin[j].kahao)>0) {
					t = lin[j];
					lin[j] = lin[i];
					lin[i] = t;
				}
			}
		}
		FILE* fp;
		if ((fp = fopen("kahaopai.txt", "w")) == NULL)
		{
			printf("�򲻿��ļ�\n");
			exit(0);
		}
		for (int i = 0; i < n; i++)
		{
			fprintf(fp, "%s %s %s %d %f %f %f %f %f\n", lin[i].name, lin[i].zhigonghao, lin[i].kahao, lin[i].month, lin[i].yingfa, lin[i].shuidian, lin[i].shui, lin[i].zashu, lin[i].shiji);
		}
		fclose(fp);
		printf("����д��ɹ�\n");
		printf("��ѡ�񷵻�ǰһ�����˳�����,����1��0\n");
		int s = 0;
		scanf("%d", &s);
		if (s == 1)
			opsort();
		else if(s==0)
			exit(0);
		break;

	}
	case 2: {
		Ren lin[1000];
		Ren t;
		int n = duqu(lin);
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++) {
				if (lin[i].shiji<lin[j].shiji) {
					t = lin[j];
					lin[j] = lin[i];
					lin[i] = t;
				}
			}
		}
		FILE* fp;
		if ((fp = fopen("gongzipai.txt", "w")) == NULL)
		{
			printf("�򲻿��ļ�\n");
			exit(0);
		}
		for (int i = 0; i < n; i++)
		{
			fprintf(fp, "%s %s %s %d %f %f %f %f %f\n", lin[i].name, lin[i].zhigonghao, lin[i].kahao, lin[i].month, lin[i].yingfa, lin[i].shuidian, lin[i].shui, lin[i].zashu, lin[i].shiji);
		}
		fclose(fp);
		printf("����д��ɹ�\n");
		printf("��ѡ�񷵻�ǰһ�����˳�����,����1��0\n");
		int s = 0;
		scanf("%d", &s);
		if (s == 1)
			opsort();
		else if (s == 0)
			exit(0);
		break;
	}
	case 3:opsort(); break;
	case 4:exit(0); break;
	}
	exit(0);
}
void readpai() 
{
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  ѡ�����               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��1��   �����ʿ����������       *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��2     ��ʵ�����ʽ������       *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��3:    ������һ��               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        ��4:    �˳�����                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: {
		system("cls");
		Ren lin[1000];
		FILE* fp;
		int i = 0;
		if ((fp = fopen("kahaopai.txt", "r")) == NULL) {
			printf("�Ҳ����ļ�");
			exit(0);
		}
		while (fscanf(fp, "%s %s %s %d %f %f %f %f %f", lin[i].name, lin[i].zhigonghao, lin[i].kahao, &lin[i].month, &lin[i].yingfa, &lin[i].shuidian, &lin[i].shui, &lin[i].zashu, &lin[i].shiji) != EOF) {
			i++;
		}
		fclose(fp);
		int s = i;
		printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "����", "ְ����", "����", "Ӧ������", "ˮ���", "˰��", "����ۿ�", "ʵ������", "�����·�");
		for (i = 0; i < s; i++)
			printf("%-16s%-12s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", lin[i].name, lin[i].zhigonghao, lin[i].kahao, lin[i].yingfa, lin[i].shui, lin[i].shui, lin[i].zashu, lin[i].shiji, lin[i].month);
		int pan = 0;
		printf("��ѡ�񷵻�ǰһ�����˳�,����1��0");
		scanf("%d", &pan);
		if (pan == 1)
			opsort();
		else exit(0);
		break;
	}
	case 2: 
	{
		system("cls");
		Ren lin[1000];
		FILE* fp;
		int i = 0;
		if ((fp = fopen("gongzipai.txt", "r")) == NULL) {
			printf("�Ҳ����ļ�");
			exit(0);
		}
		while (fscanf(fp, "%s %s %s %d %f %f %f %f %f", lin[i].name, lin[i].zhigonghao, lin[i].kahao, &lin[i].month, &lin[i].yingfa, &lin[i].shuidian, &lin[i].shui, &lin[i].zashu, &lin[i].shiji) != EOF) {
			i++;
		}
		fclose(fp);
		int s = i;
		printf("%-16s%-12s%-12s%-12s%-12s%-12s%-12s%-12s%-12s\n", "����", "ְ����", "����", "Ӧ������", "ˮ���", "˰��", "����ۿ�", "ʵ������", "�����·�");
		for (i = 0; i < s; i++)
			printf("%-16s%-12s%-12s%-12.2f%-12.2f%-12.2f%-12.2f%-12.2f%-12d\n", lin[i].name, lin[i].zhigonghao, lin[i].kahao, lin[i].yingfa, lin[i].shui, lin[i].shui, lin[i].zashu, lin[i].shiji, lin[i].month);
		int pan = 0;
		printf("��ѡ�񷵻�ǰһ�����˳�,����1��0");
		scanf("%d", &pan);
		if (pan == 1)
			opsort();
		else exit(0);
		break;
	}
	case 3: opsort(); break;
	case 4:exit(0); break;
	}
}