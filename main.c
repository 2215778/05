#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
    int answer=38;
    int x;
    int trial=0;
    
    
    do
    {
    	printf("Guess a number: "); //�Է��ض� ���� ���
		scanf("%d",&x); //�Է��� ����
		trial ++;
		
		if(x>answer) //�Է¼��ڰ� ���亸�� ū�� ������ ���
		    printf("high!\n");
		
		if(x<answer)
		    printf("low!\n");
	}
	while(x!=answer); //����� ������ ���� �Ǵ� 
	
	printf("Congratulation! trials: %i\n",trial); //�õ� Ƚ�� ��� 
	
	
	return 0;
}
