#include<iostream.h>
#include<conio.h>
char * LongestCommonPrefix(char **str , int n)
{
	int i, j;
	char *ptr = str[0];

	for( i = 0 ; str[0][i] ;i++)
		;

	char *out = new char[i];

	for( i = 0; ;i++){
		for( j = 1; j < n ;j++)
			if(*ptr != str[j][i])
				break;
		if(j == n)
			out[i] = *ptr++;
		else
			break;
	}
	out[++i] = '\0' ;
	return out;
}

int main()
{
	char *str1[] = {"sakthi","samkk","sgfgshank","shag"};
	char *str2[] = {"ab","abc","def","defgh","sha"};
	clrscr();
	cout << LongestCommonPrefix(str1 ,4)<<endl;
	cout << LongestCommonPrefix(str2 ,5)<<endl;
	getch();
	return 0;
}
