#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char* argv[]) {

    FILE* fp;
    int number_word = 0, number_char = 0;
    if ((fp =fopen("D:\\我\\软件工程原理与方法\\test.txt", "r"))== NULL) {
        printf("打开错误");
    }
    char ch[200]; 
    ch[0]= fgetc(fp);
    int i=0;
    if (ch[0] !=' '&&ch[0] != ',')
        number_word++;
    while (ch[i] != EOF) {
        putchar(ch[i]); 
        
        ch[i+1]=fgetc(fp);
        number_char++;
        if ((ch[i] == ' '||ch[i] == ','||ch[i]=='\n')&&((ch[i+1]>='a'&&ch[i+1]<='z')||(ch[i+1]>='A'&&ch[i+1]<='Z')))
        {
            number_word++;
        }
        i++;
    }
    fclose(fp);
    printf("\n");
    printf("字符数:%d\n", number_char);
    printf("单词数:%d\n", number_word);
    getchar();
    return 0;
}