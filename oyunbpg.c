#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

void start(int can,int matris[][10]){
	//baþlangýç fonksiyonu
	system("cls");
	int i,j;
	printf("HAZINE AVCISI\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(matris[i][j]==1)
			{
					printf(" - ",matris[i][j]);
					}		
				
			if(matris[i][j]==2)
			{
				printf(" - ",matris[i][j]);
			}
				
			if(matris[i][j]==0)
			{
				printf(" - ",matris[i][j]);
			}
				
			if(matris[i][j]==7)
			{
				printf(" %d ",matris[i][j]);	
			}		
		}
			printf("\n");
	}

	printf("\n");
	printf("Can durumunuz: %d\n",can);
}

int secimf(int secim)
{
	system("color 5");
printf("Hazine avýna hazýr mýsýnýz? Elmaslarý toplamaya baþlamak için herhangi bir tuþa basýnýz:");
scanf("%d",&secim);

return secim;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL,"turkish");
	int sec;
	int sonu=secimf(sec);
	if(sonu==1)
{
	printf("Oyun hazýrlanýyor");
	//sleep(2);	
	system("color 6");
	system("cls");
}
	int  matris[10][10]={0},ti,tj,can=3,ta,tb,z=4,x=2,y=4;
	int i,j;
	int h=4,k=0,a=0,t;
	int d[5]={256,256,256,256,256};
	int d2[5]={256,256,256,256,256};
	while(h!=-1)
		{
		int sayac=0;
		ti=rand()%10;
		tj=rand()%10;
		matris[2][4]=7;
	a=k;
	for(t=0;t<a+1;t++)
	{
		if(d[t]!=ti && d2[t]!=tj)
		{
			sayac++;
		}	
	}
	if(sayac==k+1 && matris[ti][tj]!=7)
		{	
		d[k]=ti;
		d2[k]=tj;
			
		matris[ti][tj]=1;
		h--;
		k++;
		}		 
	}
	//asker yerleþtirme
	while(z!=-1)
	{
		ta=rand()%10;
		tb=rand()%10;
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]-1) {
				if( tb==d2[z]-1 && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]-1) {
			if( tb==d2[z] && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]-1) {
				if( tb==d2[z]+1 && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]) {
				if( tb==d2[z]-1 && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]+1) {
				if( tb==d2[z]-1 && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]+1) {
				if( tb==d2[z] && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]+1) {
				if( tb==d2[z]+1 && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
		
		if(matris[ta][tb]==0 && matris[ta][tb]!=7 )
		{
			if(matris[ta][tb]!=1 && ta==d[z]) {
				if( tb==d2[z]+1 && matris[ta][tb]!=2)
				{
					matris[ta][tb]=2;
					z--;
				}
			}
		}
	}
	
	//mutlak deðerleri//
	
	
	//çaðýrma fonksiyonu
	git:
	start(can,matris);
	int u;
	for(u=0;u<1;u++)
	{
	
		if(matris[d[0]][d[0]]==0 && matris[d[1]][d2[1]]==0) {
				if(matris[d[2]][d2[2]]==0 && matris[d[3]][d2[3]]==0)
				{
					if(matris[d[4]][d2[4]]==0)
					{
						printf("\n KAZANDINN.HARÝKA BÝR AVCISIN\n");
							break;
					}
				  }  
			}
	}
	int mutlakdeger[5];
	
	mutlakdeger[0]=abs(x-d[0])+abs(y-d2[0]);
	
	mutlakdeger[1]=abs(x-d[1])+abs(y-d2[1]);
	
	mutlakdeger[2]=abs(x-d[2])+abs(y-d2[2]);
	
	mutlakdeger[3]=abs(x-d[3])+abs(y-d2[3]);
	
	mutlakdeger[4]=abs(x-d[4])+abs(y-d2[4]);
	
	for(i=0;i<5;i++)
	{
		if(matris[d[i]][d2[i]]==0)
		{
			printf("%d. Elmasý buldunuz\n",i+1);
		}
			
		else
		{
			printf("%d. Elmas mesafesi = %d\n",i+1,mutlakdeger[i]);
		}
			
	}
	
	
			//hareket etme
		while(can!=0)
	{				
		char hareket;
		hareket = getche();
		switch(hareket)
		{

			case 'w':
				if(x==0)
				{
					continue;
				}
			if(matris[x][y]!=2)
			{
				matris[x][y]=0;	
			}
			if(matris[x-1][y]!=2)
			{
				matris[x-1][y]=7;
			}	
			x--;
			
			if(matris[x][y]==2)
			{
				x=2;
				y=4;
				can--;
		matris[2][4]=7;
		printf("Yakalandýn");
		sleep(1);
		system("cls");
			}	
			system("cls");
			goto git;
			break;
			///
			case 's':	
				if(x==9)
				{
					continue;
				}			
				if(matris[x][y]!=2)
			{
				matris[x][y]=0;	
			}
			if(matris[x+1][y]!=2)
			{
				matris[x+1][y]=7;
			}
			x++;
			if(matris[x][y]==2)
			{
				x=2;
				y=4;
				can--;
			matris[2][4]=7;
			printf("Yakalandýn");
			sleep(1);
			system("cls");
			}
			system("cls");
			goto git;
			
			break;
			case 'a':
			if(y==0){
				continue;
			}
			
			if(matris[x][y]!=2)
			{
				matris[x][y]=0;	
			}
			if(matris[x][y-1]!=2)
			{
				matris[x][y-1]=7;
			}

			y--;
			
			if(matris[x][y]==2)
			{
				x=2;
				y=4;
				can--;
			matris[2][4]=7;
			printf("Yakalandýn");
		sleep(1);
		system("cls");
			}

		system("cls");
			goto git;
			break;
			case 'd':
				if(y==9)
				{
					continue;
				}	
			if(matris[x][y]!=2)
			{
				matris[x][y]=0;	
			}
			if(matris[x][y+1]!=2)
			{
   			matris[x][y+1]=7;
			}
			y++;
			if(matris[x][y]==2)
			{	
			x=2;
			y=4;
			can--;
			matris[2][4]=7;
			printf("Yakalandýn");
			sleep(1);
			system("cls");
			}
			system("cls");
			goto git;
			break;
			default:
			printf(""); break;				
		}
	}
	//kaybetmek
	if(can==0){
		printf("\n KAYBETTÝN.\n");
		}

	return 0;
}
