       #include"manage.h"
void denglumenu() {
	FILE* fp;
	int mi=0;
	fp=fopen("opmm.txt", "r+");
	fscanf(fp, "%d", &mi);
	fclose(fp);
	int n;
	int s;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*               请选择你的身份            *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*    按1:管理员              按2:员工     *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                 按3退出                 *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	if (n == 1)
	{
		printf("请输入管理员密码\n");
		printf("如密码错误请重新选择身份\n");
		scanf_s("%d", &s);
		if (s == mi - 900)
		{
			printf("密码正确\n");
			OPmenu();
		}
		else
		{
			denglumenu();
		}

	}
	else if (n == 2) {
		yuanMenu();
	}
	else
		exit(0);


}                     
void OPmenu() {
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*        按1：     进行输入数据           *\n");
	printf("\t\t*        按2：     进行浏览数据           *\n");
	printf("\t\t*        按3：     进行查询数据           *\n");
	printf("\t\t*        按4       进行数据修改           *\n");
	printf("\t\t*        按5       进行数据处理           *\n");
	printf("\t\t*        按6       进行修改密码           *\n");
	printf("\t\t*        按7       返回上一级             *\n");
	printf("\t\t*        按8       退出系统               *\n");
	printf("\t\t*        如输入其他请再次输入             *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:system("cls"); shuru(yuangong); break;//输入
	case 2:system("cls"); lookMenu(); break;//浏览
	case 3:system("cls"); chaxunmenu(); break;//查询
	case 4:system("cls"); dcMenu(); break;//删除
	case 5:system("cls");; processMenu();//数据处理
	case 6:system("cls");chOPmi(); break;//修改密码
	case 7:denglumenu(); break;
	case 8:exit(0);  break;
	}
	
	OPmenu();
}
void lookMenu() {
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按1：   按姓名浏览数据           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按2     按卡号浏览数据           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按3:    返回上一级               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按4:    退出程序                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        如输入其他请再次输入             *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
		
	switch (n)
	{
	case 1: nameRead(); break;
	case 2: kaRead(); break;
	case 3: OPmenu(); break;
	case 4: exit(0); break;
	}
	lookMenu();
}
void chaxunmenu() {
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按1：   按姓名查询数据           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按2     按卡号查询数据           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按3:    返回上一级               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按4:    退出程序                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        如输入其他请再次输入             *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: nameSeek(); break;
	case 2: kaSeek(); break;
	case 3: OPmenu(); break;
	case 4: exit(0); break;
	}

	chaxunmenu();
}
void yuanMenu() 
{
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*        按1：   进行查询数据             *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按2     按月份统计所发放的工资   *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按3     返回上一级               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按4     退出系统                 *\n");
	printf("\t\t*        如输入其他请再次输入             *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:system("cls"); chaxunmenu1(); break;
	case 2:system("cls"); yuancount(); break;
	case 3:system("cls"); denglumenu(); break;
	case 4:exit(0); break;
	}
	yuanMenu();
}
void chaxunmenu1() {
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按1：   按姓名查询数据           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按2     按卡号查询数据           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按3:    返回上一级               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按4:    退出程序                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        如输出其他请再次输入             *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: nameSeek1(); break;
	case 2: kaSeek1(); break;
	case 3: yuanMenu(); break;
	case 4: exit(0); break;
	}
	chaxunmenu1();
}
void dcMenu(){
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按1：   修改指定员工的数据       *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按2     删除指定员工的数据       *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按3:    返回上一级               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按4:    退出程序                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        如输入其他请再次输入             *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: opgai(); break;
	case 2: opshan(); break;
	case 3: OPmenu(); break;
	case 4: exit(0); break;
	}
}
void processMenu()
{
	int n;
	system("cls");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                  选择操作               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按1：   统计员工某时段工资总和   *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按2     对数据进行排序           *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按3:    返回上一级               *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        按4:    退出程序                 *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*        如输入其他请再次输入             *\n");
	printf("\t\t*******************************************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: opcount(); break;
	case 2: opsort(); break;
	case 3: OPmenu(); break;
	case 4: exit(0); break;
	}
	processMenu();
}