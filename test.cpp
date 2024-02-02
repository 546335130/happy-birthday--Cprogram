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
    //bute转化函数 
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
//显示进度条函数 
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
 




// 第一个代码片段
void codeSnippet1() {
    // 在这里编写第一个代码片段的逻辑
	unsigned int i;
	unsigned int total1 = (unsigned int)188 * ONEMB;
	unsigned int total2 = (unsigned int)1 * ONEGB + 267 * ONEMB;
	
	srand(time(0));//设置个随机数种子
	
	printf("Unique Surprise————致十九岁的你");
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
	
	
	printf("\n来了来了\nヽ(°◇° )ノ（一路小跑）ヽ(°◇° )ノ\n");
	Sleep(1000);
	printf("\nAre you ready?\n");
	printf("Y/N\n(请按Y开始本次的航班");
	char a;
	while(1)
	{
		a=getchar();
		getchar();
		if(a=='n'||a=='N'||a=='Y'||a=='y')break;
		else printf("\n是大写大写大写的Y！！！重新输入：Y/N\n");
	}
	if(a=='n'||a=='N')
	{
		printf("\n注意看啊，这次是Y错N对了啊（只限本次）Y/N\n") ;
		char b;
			while(1)
		{
			b=getchar();
			getchar();
			if(b=='n'||b=='N'||b=='Y'||b=='y')break;
			else printf("\n看清楚再按\n");
		}
		if(b=='y'||b=='Y'){printf("\n这次真心最后了啊\n");Sleep(3000);printf("等几秒我就会退出了,你可以试一试真答案了（如果还没玩完）");Sleep(10000);	} 
	} 
	printf("\n吼\(^o^)/~\n");Sleep(1000);
	printf("\n按任意键我们继续。\n");
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
	printf("\n现在开始确认使用者身份。(走一下流程)( ′ ? ` )\n");Sleep(1000);
	printf("\n方便输入您的姓名吗？\n");Sleep(1000);
	
	char aa[100];
	while(1)
	{
		printf("\n请输入姓名(中文)：");
		scanf("%s",aa);
		getchar();
		if(strcmp(aa,"L")==0){printf("\n查询中");Sleep(400);printf("...\n");Sleep(2000);//输入你想要祝福的人  这里为L
		printf("\n找到啦！\n");break; }
		else 
		{
			printf("\n查询中");
			Sleep(400);
			printf("...\n");
			Sleep(3000);
			printf("\n不好意思。本程序的被邀请人不是您。\n");
			Sleep(500);
			printf("\n是不是不小心输错了？\nY/N\n");
			char pp;
			while(1)
			{
				pp=getchar();
				getchar();
				if(pp=='n'||pp=='N'||pp=='Y'||pp=='y')break;
				else printf("\n不合法的输入喔！请重新输入吧：Y/N\n");
			}
			if(pp=='n'||pp=='N')
			{	
				printf("\nok，正在退出。\n");
				Sleep(4000);
				exit(0);
			}
		
		} 
	}
	printf("\nbingo看来是来对人了\n");Sleep(1000);Sleep(1000);
	printf("\n接下来的话，实际上就是几个节目\n");
	Sleep(2000);
	printf("\n但是啊，但是啊，我觉得还挺符合你的炫酷(自我感觉良好)( ˙灬˙ )\n");
	Sleep(2000); 
	printf("\n(⊙_☉)emmmmmm(⊙_☉)\n");
	Sleep(2000); 
	printf("\n反正点就完事了(〃￣ω￣〃ゞ\n");Sleep(2000);
	printf("\n第一个来了(つ°ヮ°)つ\n"); Sleep(1000);
	printf("\n按任意键我们继续。\n");
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
            printf("=========祝*******，生日快乐！==========");//输入你想要祝福的人
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
// 第二个代码片段
void codeSnippet2() {
    printf("这是第二个代码片段\n");
    // 在这里编写第二个代码片段的逻辑
	system("mode con cols=80 lines=40 ");
    system("title Unique Surprise————致十九岁的你");
    len = strlen(color);
    char data[200][60]={
                        {"祝你生日快乐！祝你生日快乐 ！"},{"\nHappy birthday to you！\n"},

    {"今天是你最特别的日子\n"},{"愿你想要的都得到\n"},{"得到的的都美好\n"},

    {"祝你生日快乐，愿你勇敢无畏\n"},{"祝你生日快乐，愿你的每一天都充满阳光和笑声！\n"},{"祝你生日快乐，愿你有梦可依\n"},

    {"有人可爱\n"},{"愿你今后的旅程\n"},{"一路平安\n"},

    {"生日快乐！愿你在新的一年里健康快乐，心想事成！\n"},{"在你的生日这特殊的日子里，我衷心祝福你，幸福快乐无边！\n"},{"生日快乐！愿你的未来充满希望，每一天都充满喜悦！\n"},{"未来可期！\n"},

    {"祝你生日快乐！\n"}
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
    //循环次数 
    for(int i=0;i<100;i++){i++;
        draw_heart(1);
        printf("\n\n\n\n");
    }
}

void codeSnippet3() {
    // 在这里编写第三个代码片段的逻辑
    Sleep(2000); 
	printf("\n等等，你不会以为这样子第一个节目就结束了吧\n");Sleep(2000);
	printf("\nNO NO NO\n"); Sleep(1000);
	printf("\n现在的话做好准备，点击一下全屏\n");Sleep(2000);
	printf("\n好戏来了哦(╯°□°）╯︵ ┻━┻\n"); Sleep(1000);
	printf("\n按任意键我们继续。\n");
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
\n\                                 世界上全宇宙所以美好事物通通都给我过来\n\
\n\                                                 怒怒过来 \n\
            ***     **       ***          \n\
        *  *   *            *   *                     \n\
      *  *       *       *        * *	\n\
    *   *          *  *             **	                                             希望你一切都好，希望所有俗套的祝福语都在你身上灵验，祝你生日快乐!\n\
   *         **              **       *	\n\
  *        *    *         *      *     *	      *********                      祝你的生日充满欢笑和快乐，愿你的岁月始终如当下这般美丽！\n\
 *       *        *    *           *    *	  *****       *              *****     \n\
 *                                      *	 **    * **********         *     *  祝福你的生日特别美好，像你一样的人更特别可爱！\n\
*                                        *	*       *     **    *       *     *  \n\
*                                        *     *        *      *     *      *     *  愿你永远心如明镜，愿你永远心怀山河！\n\
*                                        *     *     ********    *     *****      *  \n\
*     ******************************     *     *    *    *   *    *     *         *  祝你朝朝如愿，岁岁平安，自成人间绝色，远胜万缕清风！ \n\
 *     *   *   *     *    *   *   *     *      *****      *   *         *       *\n\
 *      *  *   *     *    *   *  *      *     *     *      * *          *     *      祝你朝朝如愿，岁岁平安，自成人间绝色，远胜万缕清风！\n\
  *      * *   *     *    *   * *      *     *       ********           *****\n\
   *       *   *     *    *   *       *       *                         *            寂寂无名处走来，彼时少年诗篇，无畏风险不惧爱！                  \n\
    *        ****************        *	       *************************             \n\
      *                            *	                                             在你的生日这特殊的日子里，我衷心祝福你，幸福快乐无边！\n\
            *                *	\n\
                   **\n");
				   printf("烟火向星辰，所愿皆成真");
	Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);Sleep(1000);
	Sleep(2000); 
	printf("\n等等，你不会以为这样子第一个节目就结束了吧\n");Sleep(2000);
	printf("\nNO NO NO\n"); Sleep(1000);
	printf("\n现在的话做好准备，点击一下全屏\n");Sleep(2000);
	printf("\n好戏来了哦(╯°□°）╯︵ ┻━┻\n"); Sleep(1000);
	printf("\n按任意键我们继续。\n");
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
    // 在这里编写第四个代码片段的逻辑
    void Birthday();
    for(int i = 0; i<3; i++)
        Birthday();
}
int main() {
    // 调用第一个代码片段，为开头段
    codeSnippet1();

    // 第一个代码片段运行完毕后，继续调用第二个代码片段，为简单的祝福语
    codeSnippet2();
    
    // 第三个代码来了，为作者自己的小趣味
	codeSnippet3(); 

	// 第四个代码来了，为生日快乐歌
	codeSnippet4();
    return 0;
}
