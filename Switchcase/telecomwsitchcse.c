#include<stdio.h>

main()

{
	int option;
	
	printf("Hello Sir\n\n");
	printf("Enter the number for next step\n");
	printf("0.to call end\n");
	printf("1.to continue call\n");
	printf("Enter your option (1,0) : ");
	scanf("%d",&option);
	
	switch(option)
	{
		case 0:printf(" end call :");
		break;
		case 1:printf(" continue call :\n\n");
		
		printf("Choose your Language \n");
		printf("1.English\n");
		printf("2.Hindi\n");
		printf("3.Gujarati\n");
		
		printf("Enter the number to choose your language (1,2,3) : ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:printf("English\n\n");
			
			printf("Choose your Services\n");
		    printf("1.talk to customer care\n");
		    printf("2.Register Complain\n");
		    printf("3.Inquiry for service\n");
			
			printf("Enter the number to choose service (1,2,3) : ");
			scanf("%d",&option);
			
			switch(option)
			{
				case 1:printf("talk to customer care\n");
				break;
				case 2:printf("Register Complain\n");
				break;
				case 3:printf("Inquiry for service\n");
				break;
				default:printf("Please enter valid Number  :");
			}
			break;
			case 2:printf("Hindi\n\n");
			
			printf("seva chunane ke lie nambar darj karen\n");
		    printf("1.kastamar keyar se baat kare\n");
		    printf("2.shikaayat darj kare\n");
		    printf("3.seva ke lie poochhataachh\n");
			printf("seva chunane ke lie nambar darj karen (1,2,3): ");
			scanf("%d",&option);
			
			switch(option)
			{
				case 1:printf("kastamar keyar se baat kare\n");
				break;
				case 2:printf("shikaayat darj kare\n");
				break;
				case 3:printf("seva ke lie poochhataachh\n");
				break;
				default:printf("Please enter valid Number  :");
			}
			break;
			case 3:printf("Gujarati\n\n");
			
			printf("Seva pasanda karava mate nambara dakhala karo\n ");
		    printf("1.Grahaka sambha?a sathe vata karoe\n");
		    printf("2.Phariyada nondhavo\n");
		    printf("3.Seva mate puchaparacha\n");
			printf("Seva pasanda karava mate nambara dakhala karo (1,2,3): ");
			scanf("%d",&option);
			
			switch(option)
			{
				case 1:printf("Grahaka sambha?a sathe vata karo\n");
				break;
				case 2:printf("Phariyada nondhavo\n");
				break;
				case 3:printf("Seva mate puchaparacha\n");
				break;
				default:printf("Please enter valid Number  :");
			}
			break;
		}
		
		
		break;
		default:printf("Please enter valid Number  :");
	}
}
