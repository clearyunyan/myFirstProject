#include"manage.h"
int main() {
	
	int mima = 6135902;
	FILE* fp;
	int n, s;
	int meishayong = 0;
	/*shuru(yuangong);
	save(yuangong, 1);*/
	
	fp=fopen("opmm.txt", "a+");
	if (fscanf(fp, "%d", &meishayong) == EOF) {
		fprintf(fp, "%d\t", mima+900);
	}
	fclose(fp);

	printf("\n\n\n\n\n");
	printf("\t\t*******************************************\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*               ������Ϣ����ϵͳ          *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                        ����������롭�� *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*                                         *\n");
	printf("\t\t*******************************************\n");
	_getche();
	denglumenu(); 
	
	return 0;
}

