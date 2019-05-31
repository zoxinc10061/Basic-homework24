#include <stdio.h>

#include <stdlib.h>

struct course

{

	char name[10];  

	int calculus;

	int computer;

	int programming;

} p;



int main(void)

{

    FILE *pFile;



	printf("-------------------------------------------------\n");

	printf("          用唯讀模式讀取couse.txt(結構體)        \n");

	printf("-------------------------------------------------\n");

	printf("讀取內容為：\n");

	pFile=fopen("couse.txt", "r");

        

    if (pFile==NULL)

    {

        printf("檔案開啟失敗!!\n");

        exit(1);

	}   

    else

    {

    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming)!=EOF) 

    	    printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 

	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
