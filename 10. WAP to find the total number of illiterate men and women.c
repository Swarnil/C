#include<stdio.h>

int main(){
	int t, p_man, p_wman, l, l_man, l_wman, iman, iwman;
	t = 80000;
	p_man = t*52/100;
	p_wman = t-p_man;
	l=t*48/100;
	l_man = t*35/100;
	l_wman = l-l_man;
	iman = p_man-l_man;
	iwman = p_wman-l_wman;
	printf("Total population = %d\n",t);
	printf("Total men = %d\n",p_man);
	printf("Total women = %d\n",p_wman);
	printf("Total literate men = %d\n",l_man);
	printf("Total  literate women = %d\n",l_wman);
	printf("Total illiterate men = %d\n",iman);
	printf("Total illiterate women = %d\n",iwman);	
	return 0;
}
