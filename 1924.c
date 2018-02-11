#include <stdio.h>
int month, day, resultday;
// 당연하게도 0부터 시작
int MonthLastDay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char DayOfWeek[][10] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int main(void) {
	scanf("%d %d", &month, &day);
	
	if(day > MonthLastDay[month-1] || day > 31) {
		printf("Error");
	}
	
	for(int i=1; i < month; i++) {
		resultday += MonthLastDay[i - 1];
	}
	resultday += day;
	printf("%s", DayOfWeek[resultday % 7]);

	return 0;
}
