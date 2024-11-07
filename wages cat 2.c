#include<stdio.h>
int main(){
	float hours_worked,hourly_wages;
	float gross_pay,taxes,net_pay,overtime_rates,tax_rates;
	float tax_threshold=600;
	int regular_hours=40;
	float taxrate=0.15,tax_rate1=0.20;
	
	printf("enter the hours worked in a week:");
	scanf("%d",&hours_worked);
	printf("enter the hourly_wage:");
	scanf("%1f",hourly_wages);
	
	if(hours_worked>regular_hours){
		gross_pay=(regular_hours*hourly_wages)+((hours_worked-regular_hours)*hourly_wages*overtime_rates);
		
		}else{
			gross_pay=hours_worked*hourly_wages;
		}
		if(gross_pay<=taxes){
			taxes=gross_pay*tax_rates;
		}else{
			taxes=(tax_threshold*tax_rates)+((gross_pay-tax_threshold)*tax_rate1);
		}
		net_pay=gross_pay-taxes;
		
		printf("gross_pay:$%.2f\n",gross_pay);
		printf("taxes:%.2f\n",taxes);
		printf("net_pay:%.2f\n",net_pay);
		return 0;
		
	}
	
	
	
	