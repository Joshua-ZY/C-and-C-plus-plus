#include <stdio.h>

/*信号报告
无线电台的RS制信号报告是由三两个部分组成的：
R(Readability) 信号可辨度即清晰度.
S(Strength)    信号强度即大小.
其中R位于报告第一位，共分5级，用1—5数字表示.
Unreadable
Barely readable, occasional words distinguishable
Readable with considerable difficulty
Readable with practically no difficulty
Perfectly readable
报告第二位是S，共分九个级别，用1—9中的一位数字表示
Faint signals, barely perceptible
Very weak signals
Weak signals
Fair signals
Fairly good signals
Good signals
Moderately strong signals
Strong signals
Extremely strong signals
现在，你的程序要读入一个信号报告的数字，然后输出对应的含义。如读到59，则输出：
Extremely strong signals, perfectly readable.
输入格式:
一个整数，信号报告。整数的十位部分表示可辨度，个位部分表示强度。输入的整数范围是[11,59]中的个位不为0的数字，这个范围
外的数字不可能出现在测试数据中。
输出格式：
一句话，表示这个信号报告的意义。按照题目中的文字，先输出表示强度的文字，跟上逗号和空格，然后是表示可辨度的文字，跟上
句号。注意可辨度的句子的第一个字母是小写的。注意这里的标点符号都是英文的。
*/

int main() {
	int r, s, rs;
	scanf("%d", &rs);
	r = rs / 10;
	s = rs % 10;
	switch (s)
	{
	case 1: printf("Faint signals, barely perceptible, "); break;
	case 2:printf("Very weak signals, "); break;
	case 3:printf("Weak signals, "); break;
	case 4:printf("Fair signals, "); break;
	case 5:printf("Fairly good signals, "); break;
	case 6:printf("Good signals, "); break;
	case 7:printf("Moderately strong signals, "); break;
	case 8:printf("Strong signals, "); break;
	case 9:printf("Extremely strong signals, "); break;
	}
	switch (r)
	{
	case 1: printf("unreadable.\n"); break;
	case 2:printf("barely readable, occasional words distinguishable.\n"); break;
	case 3:printf("readable with considerable difficulty.\n"); break;
	case 4:printf("readable with practically no difficulty.\n"); break;
	case 5:printf("perfectly readable.\n"); break;
	}
	return 0;
}