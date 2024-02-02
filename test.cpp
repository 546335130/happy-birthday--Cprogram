#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#define I 20
#define R 340
#define MAX_TIME 99999999
#define ONEMB	(1024*1024)
#define ONEGB	(1024*ONEMB)
    //buteת������ 
int convByteToHumanResult(unsigned int bytes, char* result)
{
	int i;
	char uint[][5] = {"B", "Kb", "MB", "GB", "TB", "PB"};
	double dbBytes = bytes;
	
	if(NULL == result)
	{
		return -1;
	}
		
	for(i=0; dbBytes>=1024.0;i++)
	{
		dbBytes /= 1024.0;
	}
 
	sprintf(result, "%.2lf%s", dbBytes, uint[i]);
	return i;
}
//��ʾ���������� 
void showProcessBar(unsigned int total, unsigned int recv, char* info)
{
	int i;
	float frecv = recv;
	int percent = (int)((frecv/total) * 100);
	char res1[64] = {0};
	char sum1[64] = {0};
	char bar[101] = {0};
	
	for(i=0; i<percent; i++)
	{
		bar[i] = '#';
	}
	
	convByteToHumanResult(recv, res1);
	convByteToHumanResult(total, sum1);
	
	if(NULL != info)
	{
		printf("\r%s total:%s(%u Byte) recv:%s(%u Byte) [%d%%%s]     ", info, sum1, total, res1, recv, percent, bar);
		fflush(stdout);
	}	
}
 




// ��һ������Ƭ��
void codeSnippet1() {
    // �������д��һ������Ƭ�ε��߼�
	unsigned int i;
	unsigned int total1 = (unsigned int)188 * ONEMB;
	unsigned int total2 = (unsigned int)1 * ONEGB + 267 * ONEMB;
	
	srand(time(0));//���ø����������
	
	printf("Unique Surprise����������ʮ�������");
	Sleep(2000);
	
	printf("\nStart download aaa.log...\n");
	for(i=0;;)
	{
		showProcessBar(total1, i, "download...");
		
		if(i >= total1)
		{
			break;
		}
		
		i += rand()%1024;
		
		if(i>total1)
		{
			i = total1;
		}
	}
	
	printf("\nDownload aaa.log finish!\n\n");
	
	
	printf("\n��������\n�c(���� )�Σ�һ·С�ܣ��c(���� )��\n");
	Sleep(1000);
	printf("\nAre you ready?\n");
	printf("Y/N\n(��ֻ��ѡY,��Ӳ���ԡ̣��ǵô�дY��\n���������ֻ��һ��С��Ϸ������������������");
	char a;
	while(1)
	{
		a=getchar();
		getchar();
		if(a=='n'||a=='N'||a=='Y'||a=='y')break;
		else printf("\n����д��д��д�������������룺Y/N\n");
	}
	if(a=='n'||a=='N')
	{
		printf("\n�չ�������NONONO�����úú���ô���ǰɣ�\nע�⿴���������Y��N���˰���ֻ�ޱ��Σ�Y/N\n") ;
		char b;
			while(1)
		{
			b=getchar();
			getchar();
			if(b=='n'||b=='N'||b=='Y'||b=='y')break;
			else printf("\n���������ȣ����������ˣ���Y/N\n");
		}
		if(b=='y'||b=='Y'){printf("\n���ձ䣬�����ս���ķ��ϾͲ��ƽ��ˣ������������˰�\n");Sleep(3000);printf("�ȼ����Ҿͻ��˳���,�������һ������ˣ������û���꣩");Sleep(10000);	} 
	} 
	printf("\n��\(^o^)/~\n������ոո�û����һ��NO�Ļ��������һ��ȫ�����������ԣ��е�СȤζ��\n");Sleep(1000);
	printf("\n����������Ǽ�����\n");
	getchar();
	Sleep(1000);
	printf("\nStart download CProgram.zip...\n");
	Sleep(2000);
	for(i=0;;)
	{
		showProcessBar(total2, i, "download...");
		
		if(i >= total2)
		{
			break;
		}
		
		i += rand()%8192;
		
		if(i>total2)
		{
			i = total2;
		}
	}
	
	printf("\nDownload CProgram.zip finish!\n");
	Sleep(1000); 
	printf("\n���ڿ�ʼȷ��ʹ������ݡ�(��һ������)( �� ? ` )\n");Sleep(1000);
	printf("\n������������������\n");Sleep(1000);
	
	char aa[100];
	while(1)
	{
		printf("\n����������(����)��");
		scanf("%s",aa);
		getchar();
		if(strcmp(aa,"L")==0){printf("\n��ѯ��");Sleep(400);printf("...\n");Sleep(2000);
		printf("\n�ҵ�����\n");break; }
		else 
		{
			printf("\n��ѯ��");
			Sleep(400);
			printf("...\n");
			Sleep(3000);
			printf("\n������˼��������ı������˲�������\n");
			Sleep(500);
			printf("\n�ǲ��ǲ�С������ˣ�\nY/N\n");
			char pp;
			while(1)
			{
				pp=getchar();
				getchar();
				if(pp=='n'||pp=='N'||pp=='Y'||pp=='y')break;
				else printf("\n���Ϸ�������ร�����������ɣ�Y/N\n");
			}
			if(pp=='n'||pp=='N')
			{	
				printf("\nok�������˳���\n");
				Sleep(4000);
				exit(0);
			}
		
		} 
	}
	printf("\nҪ�ľ�����\n");Sleep(1000);Sleep(1000);
	printf("\n�������Ļ���ʵ���Ͼ��Ǽ�����Ŀ\n");
	Sleep(2000);
	printf("\n���ǰ������ǰ����Ҿ��û�ͦ��������ſ�(���Ҹо�����)( �B��B )\n");
	Sleep(2000); 
	printf("\n(��_��)emmmmmm(��_��)\n");
	Sleep(2000); 
	printf("\n�������������(�����أ����g\n");Sleep(2000);
	printf("\nͷ������(�ġ���)��\n"); Sleep(1000);
	printf("\n����������Ǽ�����\n");
	getchar();
} 





 
 #define I 20
#define R 340
#define MAX_TIME 99999999
 
void draw_heart(int); 
void draw_wait(); 
void draw_color(); 
 
char color[] = "color ";
int len;
char font_color[] = {"023456789abcde"};
char back_color[] = {"000000000000b"};
 
void draw_heart(int wait){
    int i, j, e, a; 
    for(i=1,a=I;i<I/2;i++,a--){
        for(j=(int) ( I-sqrt(I*I-(a-i)*(a-i)) );j>0;j--)    printf(" ");
        for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)    printf("\3");
        for(j=(int)( 2*( I-sqrt(I*I-(a-i)*(a-i)) ) );j>0;j--)    printf(" ");
        for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)    printf("\3");
        printf("\n");
        if(wait && i % 2){
            draw_color();
            draw_wait();    
        }
    }
    for(i=1;i<80;i++){
        if(i==20){
            printf("=========ף*******�����տ��֣�==========");
            i+=40;
        }
        printf("\3");
    }
    printf("\n");
    for(i=1;i<=R/2;i++){
        if(i%2||i%3)    continue;
        for(j=(int) ( R-sqrt(R*R-i*i) );j>0;j--)    printf(" ");
        for(e=1;e<=2*( sqrt(R*R-i*i) - (R-2*I) );e++)    printf("\3");
        printf("\n");
        if(wait){
            draw_color();
            draw_wait();    
        }
    }
}
 
void draw_wait(){
    int times;
    for(times=0;times<MAX_TIME;times++);
}
void draw_color(){
    char cl[20]; 
    srand((unsigned int)time(NULL));
    int k = rand() % strlen(back_color); 
    strcpy(cl, color);
    cl[len] = back_color[k];
    srand((unsigned int)time(NULL));
    k = rand() % strlen(font_color);
    cl[len + 1] = font_color[k];
    cl[len + 2] = '\0';
    system(cl);
} 
// �ڶ�������Ƭ��
void codeSnippet2() {
    printf("���ǵڶ�������Ƭ��\n");
    // �������д�ڶ�������Ƭ�ε��߼�
	system("mode con cols=80 lines=40 ");
    system("title Unique Surprise����������ʮ�������");
    len = strlen(color);
    char data[200][60]={
                        {"ף�����տ��֣�ף�����տ��� ��"},{"\nHappy birthday to you��\n"},

    {"�����������ر������\n"},{"Ը����Ҫ�Ķ��õ�\n"},{"�õ��ĵĶ�����\n"},

    {"ף�����տ��֣�Ը���¸���η\n"},{"ף�����տ��֣�Ը���ÿһ�춼���������Ц����\n"},{"ף�����տ��֣�Ը�����ο���\n"},

    {"���˿ɰ�\n"},{"Ը������ó�\n"},{"һ·ƽ��\n"},

    {"���տ��֣�Ը�����µ�һ���｡�����֣������³ɣ�\n"},{"���������������������������ף���㣬�Ҹ������ޱߣ�\n"},{"���տ��֣�Ը���δ������ϣ����ÿһ�춼����ϲ�ã�\n"},{"δ�����ڣ�\n"},

    {"ף�����տ��֣�\n"}
                    };
    int start = 9, end = 20;
 
    int sign = 0;
    int i,j;
    long times;    
    int wait = 15;
    for(sign = 0; sign < start; sign++){
        printf("\n%s",data[sign]);
        for(i = 0; i < wait; i++){
             draw_color(); 
            draw_wait();
        } 
        if(sign == 5)    wait /= 3;
    }    
    int colorsize = 10;
    printf("\n\n\n\n");
    draw_heart(0);
    for(; ; ){
        char cl[20];
        j = 0;
        for(i = j; i < strlen(font_color); i+=2){
            strcpy(cl, color);
            cl[len] = font_color[i];
            cl[len + 1] = '\0';
            system(cl);
            draw_wait();
        }
        j++;
        j %= 2;    
        srand((unsigned int)time(NULL));
        int k = rand() % strlen(back_color); 
        strcpy(cl, color);
        cl[len] = back_color[k];
        for(i = 0; i < strlen(font_color)/2; i++){
            srand((unsigned int)time(NULL));
            k = rand() % strlen(font_color); 
            cl[len + 1] = font_color[k];
            cl[len + 2] = '\0';
            system(cl);
            draw_wait();
        }    
        printf("\n%s",data[sign]);
        sign++;
        if(sign > end){
            break;
        }
    }
    //ѭ������ 
    for(int i=0;i<100;i++){i++;
        draw_heart(1);
        printf("\n\n\n\n");
    }
}

void codeSnippet3() {
    // �������д����������Ƭ�ε��߼�
    Sleep(2000); 
	printf("\n�ȵȣ��㲻����Ϊ�����ӵ�һ����Ŀ�ͽ����˰�\n");Sleep(2000);
	printf("\nNO NO NO\n"); Sleep(1000);
	printf("\n���ڵĻ�����׼�������һ��ȫ��\n");Sleep(2000);
	printf("\n��Ϸ����Ŷ(�s����㣩�s�� �ߩ���\n"); Sleep(1000);
	printf("\n����������Ǽ�����\n");
	getchar();
	Sleep(1000);
	Sleep(1000);
	system("color E0"); 
	printf("\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\                                 ������ȫ����������������ͨͨ�����ҹ���\n\
\n\                                                 ŭŭ���� \n\
            ***     **       ***          \n\
        *  *   *            *   *                     \n\
      *  *       *       *        * *	\n\
    *   *          *  *             **	                                             ϣ����һ�ж��ã�ϣ���������׵�ף���ﶼ�����������飬ף�����տ���!\n\
   *         **              **       *	\n\
  *        *    *         *      *     *	      *********                      ף������ճ�����Ц�Ϳ��֣�Ը�������ʼ���統�����������\n\
 *       *        *    *           *    *	  *****       *              *****     \n\
 *                                      *	 **    * **********         *     *  ף����������ر����ã�����һ�����˸��ر�ɰ���\n\
*                                        *	*       *     **    *       *     *  \n\
*                                        *     *        *      *     *      *     *  Ը����Զ����������Ը����Զ�Ļ�ɽ�ӣ�\n\
*                                        *     *     ********    *     *****      *  \n\
*     ******************************     *     *    *    *   *    *     *         *  ף�㳯����Ը������ƽ�����Գ��˼��ɫ��Զʤ������磡 \n\
 *     *   *   *     *    *   *   *     *      *****      *   *         *       *\n\
 *      *  *   *     *    *   *  *      *     *     *      * *          *     *      ף�㳯����Ը������ƽ�����Գ��˼��ɫ��Զʤ������磡\n\
  *      * *   *     *    *   * *      *     *       ********           *****\n\
   *       *   *     *    *   *       *       *                         *            �ż���������������ʱ����ʫƪ����η���ղ��尮��                  \n\
    *        ****************        *	       *************************             \n\
      *                            *	                                             ���������������������������ף���㣬�Ҹ������ޱߣ�\n\
            *                *	\n\
                   **\n");
				   printf("�̻����ǳ�����Ը�Գ���");
	Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);
	Sleep(2000); 
	printf("\n�ȵȣ��㲻����Ϊ�����ӵ�һ����Ŀ�ͽ����˰�\n");Sleep(2000);
	printf("\nNO NO NO\n"); Sleep(1000);
	printf("\n���ڵĻ�����׼�������һ��ȫ��\n");Sleep(2000);
	printf("\n��Ϸ����Ŷ(�s����㣩�s�� �ߩ���\n"); Sleep(1000);
	printf("\n����������Ǽ�����\n");
	getchar();
	Sleep(1000);	   
}
void Birthday()
{
    unsigned   frequency[] = { 392, 392, 440, 392, 523, 494,
        392, 392, 440, 392, 587, 523,
        392, 392, 784, 659, 523, 494, 440,
        698, 698, 659, 523, 587, 523 };

    unsigned   delay[] = { 375, 125, 500, 500, 500, 1000,
        375, 125, 500, 500, 500, 1000,
        375, 125, 500, 500, 500, 500, 1000,
        375, 125, 500, 500, 500, 1000, };

    for (int i = 0; i<25; i++)
    {
        Beep(frequency[i], delay[i]);
    }
}
void codeSnippet4() {
    // �������д���ĸ�����Ƭ�ε��߼�
    void Birthday();
    for(int i = 0; i<3; i++)
        Birthday();
}
int main() {
    // ���õ�һ������Ƭ��
    codeSnippet1();

    // ��һ������Ƭ��������Ϻ󣬼������õڶ�������Ƭ��
    codeSnippet2();
    
    // ��������������
	codeSnippet3(); 

	// ���ĸ���������
	codeSnippet4();
    return 0;
}
