#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <MMsystem.h>
#include <pthread.h>
void PhaoHoa(int kieu_ban, int x_fireworks,int y,int color){
	int delay_ms=250;
	kieu_ban =4;
	if(kieu_ban==0){
		printf("Kieu 0\n");
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\PhaoHoa2.wav"),NULL,SND_ASYNC);
		delay(delay_ms);
		for(int i =15;i<130;i++){
			if(i>=100 && color !=RED){
				color=RED;
			}
			else if (i>=100 && color==RED){
				color=YELLOW;
			}
			//phao hoa ngan
			if(i>30){
				putpixel(x_fireworks-i/3,y+i+rand()%6,color);
				putpixel(x_fireworks+i/5,y-i+i/5-rand()%6,color);
				putpixel(x_fireworks+i/8,y-i/4-rand()%6,color);
				putpixel(x_fireworks+i/9,y+i/3+rand()%6,color);
				putpixel(x_fireworks+i/2,y+i-i/5+rand()%6,color);
				putpixel(x_fireworks+i/3,y+i/2+rand()%6,color);
				putpixel(x_fireworks+i/3,y+i+rand()%6,color);
				putpixel(x_fireworks-i/3,y+i+rand()%6,color);
				putpixel(x_fireworks-i/7,y+i/2+rand()%6,color);
				putpixel(x_fireworks-i/2,y-i+rand()%6,color);
				putpixel(x_fireworks-i/6,y+i-i/5-rand()%6,color);
				putpixel(x_fireworks-i/4,y+i/4-rand()%6,color);
				putpixel(x_fireworks-i/3,y-i/3+rand()%6,color);
			}
			//phao hoa dai
			putpixel(x_fireworks-i+i/3,y-i/3+rand()%8,color);
			putpixel(x_fireworks+i-i/2,y-i/3+rand()%8,color);
			putpixel(x_fireworks+i,y+i/3+rand()%8,color);
			putpixel(x_fireworks-i,y+i/3+rand()%8,color);
			putpixel(x_fireworks-i/4,y-i+rand()%8,color);
			putpixel(x_fireworks+i/5,y-i+rand()%8,color);
			putpixel(x_fireworks+i/2,y+i+rand()%8,color);
			putpixel(x_fireworks-i/3,y+i+rand()%8,color);
			delay(1);
		}
	}
	else if(kieu_ban==1){
		printf("Kieu 1\n");
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\PhaoHoa2.wav"),NULL,SND_ASYNC);
		delay(delay_ms);
		char dong_1[20];
		char dong_2[20];
		int text_rand = rand()%4;
		if(text_rand==0){
			sprintf(dong_1,"2024");
	    	settextstyle(5,HORIZ_DIR,7);
		} 
		else if (text_rand==1){
	    	sprintf(dong_1,"I LOVE YOU");
			sprintf(dong_2,"<3");
			settextstyle(5,HORIZ_DIR,4);
		}
		else if(text_rand==2){
			sprintf(dong_1,"HAPPY");
			sprintf(dong_2,"BIRTHDAY");
			settextstyle(5,HORIZ_DIR,4);
		}
		else{
			sprintf(dong_1,"LE XUAN HIEU");
			sprintf(dong_2,"KIEU VAN HUY");
			settextstyle(8,HORIZ_DIR,4);
		}
		int textHeight1 = textheight(dong_1);
		int textWidth1 = textwidth(dong_1);
		int textHeight2 = textheight(dong_2);
		int textWidth2 = textwidth(dong_2);
		setcolor(color);
		if(text_rand==0){
			outtextxy(x_fireworks-textWidth1/2,y-textHeight1/2,dong_1);
		}
		else{
			outtextxy(x_fireworks-textWidth1/2,y-textHeight1/2-7,dong_1);
			outtextxy(x_fireworks-textWidth2/2,y+textHeight2/2+7,dong_2);
		}
		for(int i =0;i<100;i++){
			putpixel(x_fireworks+rand()%100,y+rand()%100,rand()%16);
			putpixel(x_fireworks-rand()%100,y-rand()%100,rand()%16);
			putpixel(x_fireworks+rand()%100,y-rand()%100,rand()%16);
			putpixel(x_fireworks-rand()%100,y+rand()%100,rand()%16);
			delay(1);
		}
	}
	else if(kieu_ban==2){
		printf("Kieu 2\n");
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\PhaoHoa2.wav"),NULL,SND_ASYNC);
		delay(delay_ms);
		for(int i =3;i<100;i++){
			if(i>=70 && color !=RED){
				color=RED;
			}
			else if (i>=70 && color==RED){
				color=YELLOW;
			}
			putpixel(x_fireworks-i,y+i/2+rand()%4,color);
			putpixel(x_fireworks+i/3,y-i/2+rand()%4,color);
			putpixel(x_fireworks-i,y+i+rand()%4,color);
			putpixel(x_fireworks+i/2,y-i-i/3+rand()%4,color);
			putpixel(x_fireworks+i/9,y+i/2+rand()%4,color);
			putpixel(x_fireworks-i,y+i/2+rand()%4,color);
			putpixel(x_fireworks-i/8,y+i/4+rand()%4,color);
			putpixel(x_fireworks-i/6,y-i/4+rand()%4,color);
			putpixel(x_fireworks+i/6,y-i/4+rand()%4,color);
			putpixel(x_fireworks+i,y+i/5+rand()%4,color);
			putpixel(x_fireworks-i,y-i/5+rand()%4,color);
			putpixel(x_fireworks-i,y+i/2+rand()%4,color);
			putpixel(x_fireworks+i/4,y-i/2+rand()%4,color);
			putpixel(x_fireworks+i/7,y+i+rand()%4,color);
			putpixel(x_fireworks-i,y-i+rand()%4,color);
			putpixel(x_fireworks+i/3,y+i+rand()%4,color);
			putpixel(x_fireworks-i/3,y-i+rand()%4,color);
			putpixel(x_fireworks+i/3,y+i+rand()%4,color);
			putpixel(x_fireworks-i/5,y+i/2+rand()%4,color);
			putpixel(x_fireworks+i/5,y-i/2+rand()%4,color);
			putpixel(x_fireworks-i/5,y+i+rand()%4,color);
			putpixel(x_fireworks+i/5,y-i+rand()%4,color);
			delay(1);
		}
	}
	else if(kieu_ban ==3){
		printf("Kieu 3\n");
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\PhaoHoa2.wav"),NULL,SND_ASYNC);
		delay(delay_ms);
		for(int i =5;i<100;i++){
			if(i>=50 && color !=RED){
				color=RED;
			}
			else if (i>=50 && color==RED){
				color=YELLOW;
			}
			if(i>15&&i<75){
				putpixel(x_fireworks-i,y-i/2-rand()%6,YELLOW);
				putpixel(x_fireworks-i/5,y-i-rand()%6,YELLOW);
				putpixel(x_fireworks+i/2,y-i-rand()%6,YELLOW);
				putpixel(x_fireworks+i,y-i/3-rand()%6,YELLOW);
				putpixel(x_fireworks+i,y+i/2-rand()%6,YELLOW);
				putpixel(x_fireworks+i/5,y+i-rand()%6,YELLOW);
				putpixel(x_fireworks-i/2,y+i-rand()%6,YELLOW);
				putpixel(x_fireworks-i,y+i/3-rand()%6,YELLOW);
			}
			putpixel(x_fireworks-i+i/7,y-i-rand()%10,color);
			putpixel(x_fireworks+i,y-i-rand()%10,color);
			putpixel(x_fireworks-i,y-i/5-rand()%10,color);
			putpixel(x_fireworks+i,y+i/5-rand()%10,color);
			putpixel(x_fireworks+i-i/7,y+i-rand()%10,color);
			putpixel(x_fireworks-i,y+i-rand()%10,color);
			delay(1);
		}
	}
	else{
		printf("Kieu 4\n");
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\PhaoHoa2.wav"),NULL,SND_ASYNC);
		delay(delay_ms);
		for(int i =10;i<100;i++){
			//phao chinh
			if(i>=80 && color !=LIGHTRED){
				color=LIGHTRED;
			}
			else if (i>=80 && color==LIGHTRED){
				color=YELLOW;
			}
			putpixel(x_fireworks+i,y-i/2-rand()%5,color);
			putpixel(x_fireworks+i,y-i/2-rand()%5,color);
			
			putpixel(x_fireworks-i,y+i/2-rand()%5,color);
			putpixel(x_fireworks-i,y+i/2-rand()%5,color);
			
			putpixel(x_fireworks-i,y-i/2-rand()%5,color);
			putpixel(x_fireworks-i,y-i/2-rand()%5,color);
			
			putpixel(x_fireworks+i,y+i/2-rand()%5,color);
			putpixel(x_fireworks+i,y+i/2-rand()%5,color);
			//phao toe ra
			//phan tren
			putpixel(x_fireworks-i/2,y+i/9-rand()%4,color);
			putpixel(x_fireworks-i,y-i/10-rand()%4,color);
			putpixel(x_fireworks-i/5,y-i/6-rand()%4,color);
			putpixel(x_fireworks-i/8,y-i/3-rand()%4,color);
			putpixel(x_fireworks-i/10,y-i-rand()%4,color);
			putpixel(x_fireworks+i/9,y-i/2-rand()%4,color);
			putpixel(x_fireworks+i/6,y-i/5-rand()%4,color);
			//phan duoi
			putpixel(x_fireworks+i/2,y-i/9-rand()%4,color);
			putpixel(x_fireworks+i,y+i/10-rand()%4,color);
			putpixel(x_fireworks+i/5,y+i/6-rand()%4,color);
			putpixel(x_fireworks+i/8,y+i/3-rand()%4,color);
			putpixel(x_fireworks+i/9,y+i-rand()%4,color);
			putpixel(x_fireworks-i/10,y+i/3-rand()%4,color);
			putpixel(x_fireworks-i/5,y+i/6-rand()%4,color);
			delay(1);
		}
	}
}
void Kieu1(int x, int y, int color,int i){
	//phao hoa ngan
			if(i>30){
				putpixel(x-i/3,y+i+rand()%6,color);
				putpixel(x+i/5,y-i+i/5-rand()%6,color);
				putpixel(x+i/8,y-i/4-rand()%6,color);
				putpixel(x+i/9,y+i/3+rand()%6,color);
				putpixel(x+i/2,y+i-i/5+rand()%6,color);
				putpixel(x+i/3,y+i/2+rand()%6,color);
				putpixel(x+i/3,y+i+rand()%6,color);
				putpixel(x-i/3,y+i+rand()%6,color);
				putpixel(x-i/7,y+i/2+rand()%6,color);
				putpixel(x-i/2,y-i+rand()%6,color);
				putpixel(x-i/6,y+i-i/5-rand()%6,color);
				putpixel(x-i/4,y+i/4-rand()%6,color);
				putpixel(x-i/3,y-i/3+rand()%6,color);
			}
			
			//phao hoa dai
			putpixel(x-i+i/3,y-i/3+rand()%8,color);
			putpixel(x+i-i/2,y-i/3+rand()%8,color);
			putpixel(x+i,y+i/3+rand()%8,color);
			putpixel(x-i,y+i/3+rand()%8,color);
			putpixel(x-i/4,y-i+rand()%8,color);
			putpixel(x+i/5,y-i+rand()%8,color);
			putpixel(x+i/2,y+i+rand()%8,color);
			putpixel(x-i/3,y+i+rand()%8,color);
}
void Kieu2(int x_no, int y_no, int color){
	putpixel(x_no+rand()%100,y_no+rand()%100,rand()%16);
	putpixel(x_no-rand()%100,y_no-rand()%100,rand()%16);
	putpixel(x_no+rand()%100,y_no-rand()%100,rand()%16);
	putpixel(x_no-rand()%100,y_no+rand()%100,rand()%16);
}
void Kieu3(int x_no, int y_no, int color,int i){
	putpixel(x_no-i,y_no+i/2+rand()%4,color);
	putpixel(x_no+i/3,y_no-i/2+rand()%4,color);
	putpixel(x_no-i,y_no+i+rand()%4,color);
	putpixel(x_no+i/2,y_no-i-i/3+rand()%4,color);
	putpixel(x_no+i/9,y_no+i/2+rand()%4,color);
	putpixel(x_no-i,y_no+i/2+rand()%4,color);
	putpixel(x_no-i/8,y_no+i/4+rand()%4,color);
	putpixel(x_no-i/6,y_no-i/4+rand()%4,color);
	putpixel(x_no+i/6,y_no-i/4+rand()%4,color);
	putpixel(x_no+i,y_no+i/5+rand()%4,color);
	putpixel(x_no-i,y_no-i/5+rand()%4,color);
	putpixel(x_no-i,y_no+i/2+rand()%4,color);
	putpixel(x_no+i/4,y_no-i/2+rand()%4,color);
	putpixel(x_no+i/7,y_no+i+rand()%4,color);
	putpixel(x_no-i,y_no-i+rand()%4,color);
	putpixel(x_no+i/3,y_no+i+rand()%4,color);
	putpixel(x_no-i/3,y_no-i+rand()%4,color);
	putpixel(x_no+i/3,y_no+i+rand()%4,color);
	putpixel(x_no-i/5,y_no+i/2+rand()%4,color);
	putpixel(x_no+i/5,y_no-i/2+rand()%4,color);
	putpixel(x_no-i/5,y_no+i+rand()%4,color);
	putpixel(x_no+i/5,y_no-i+rand()%4,color);
}
void Kieu4(int x_no, int y_no, int color, int i){
	if(i>15&&i<75){
		putpixel(x_no-i,y_no-i/2-rand()%6,YELLOW);
		putpixel(x_no-i/5,y_no-i-rand()%6,YELLOW);
		putpixel(x_no+i/2,y_no-i-rand()%6,YELLOW);
		putpixel(x_no+i,y_no-i/3-rand()%6,YELLOW);
		putpixel(x_no+i,y_no+i/2-rand()%6,YELLOW);
		putpixel(x_no+i/5,y_no+i-rand()%6,YELLOW);
		putpixel(x_no-i/2,y_no+i-rand()%6,YELLOW);
		putpixel(x_no-i,y_no+i/3-rand()%6,YELLOW);
	}
	putpixel(x_no-i+i/7,y_no-i-rand()%10,color);
	putpixel(x_no+i,y_no-i-rand()%10,color);
	putpixel(x_no-i,y_no-i/5-rand()%10,color);
	putpixel(x_no+i,y_no+i/5-rand()%10,color);
	putpixel(x_no+i-i/7,y_no+i-rand()%10,color);
	putpixel(x_no-i,y_no+i-rand()%10,color);
}
void Kieu5(int x_no, int y_no, int color, int i){
	putpixel(x_no+i,y_no-i/2-rand()%5,color);
	putpixel(x_no+i,y_no-i/2-rand()%5,color);
			
	putpixel(x_no-i,y_no+i/2-rand()%5,color);
	putpixel(x_no-i,y_no+i/2-rand()%5,color);
			
	putpixel(x_no-i,y_no-i/2-rand()%5,color);
	putpixel(x_no-i,y_no-i/2-rand()%5,color);
			
	putpixel(x_no+i,y_no+i/2-rand()%5,color);
	putpixel(x_no+i,y_no+i/2-rand()%5,color);
	//phao toe ra
	//phan tren
	putpixel(x_no-i/2,y_no+i/9-rand()%4,color);
	putpixel(x_no-i,y_no-i/10-rand()%4,color);
	putpixel(x_no-i/5,y_no-i/6-rand()%4,color);
	putpixel(x_no-i/8,y_no-i/3-rand()%4,color);
	putpixel(x_no-i/10,y_no-i-rand()%4,color);
	putpixel(x_no+i/9,y_no-i/2-rand()%4,color);
	putpixel(x_no+i/6,y_no-i/5-rand()%4,color);
	//phan duoi
	putpixel(x_no+i/2,y_no-i/9-rand()%4,color);
	putpixel(x_no+i,y_no+i/10-rand()%4,color);
	putpixel(x_no+i/5,y_no+i/6-rand()%4,color);
	putpixel(x_no+i/8,y_no+i/3-rand()%4,color);
	putpixel(x_no+i/9,y_no+i-rand()%4,color);
	putpixel(x_no-i/10,y_no+i/3-rand()%4,color);
	putpixel(x_no-i/5,y_no+i/6-rand()%4,color);
}	
void PhaoHoa2(int x_fireworks_arr[],int y_fireworks_arr[],int color[]){
	int delay_ms=250;
	int kieu_ban;
	PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\PhaoHoa2.wav"),NULL,SND_ASYNC);
	delay(delay_ms);
	for(int i =0;i<130;i++){
		if(i>=100 && color[0]!=RED){
			color[0]=RED;
		}
		else if (i>=100 && color[0]==RED){
			color[0]=YELLOW;
		}
		Kieu1(x_fireworks_arr[0],y_fireworks_arr[0],color[0],i);
		char dong_1[20];
		char dong_2[20];
		if(i==0){
			int text_rand = rand()%4;
			if(text_rand==0){
				sprintf(dong_1,"2024");
		    	settextstyle(5,HORIZ_DIR,7);
			} 
			else if (text_rand==1){
		    	sprintf(dong_1,"I LOVE YOU");
				sprintf(dong_2,"<3");
				settextstyle(5,HORIZ_DIR,4);
			}
			else if(text_rand==2){
				sprintf(dong_1,"HAPPY");
				sprintf(dong_2,"BIRTHDAY");
				settextstyle(5,HORIZ_DIR,4);
			}
			else{
				sprintf(dong_1,"LE XUAN HIEU");
				sprintf(dong_2,"KIEU VAN HUY");
				settextstyle(8,HORIZ_DIR,4);
			}
			int textHeight1 = textheight(dong_1);
			int textWidth1 = textwidth(dong_1);
			int textHeight2 = textheight(dong_2);
			int textWidth2 = textwidth(dong_2);
			setcolor(color[1]);
			if(text_rand==0){
				outtextxy(x_fireworks_arr[1]-textWidth1/2,y_fireworks_arr[1]-textHeight1/2,dong_1);
			}
			else{
				outtextxy(x_fireworks_arr[1]-textWidth1/2,y_fireworks_arr[1]-textHeight1/2-7,dong_1);
				outtextxy(x_fireworks_arr[1]-textWidth2/2,y_fireworks_arr[1]+textHeight2/2+7,dong_2);
			}
		}
		Kieu2(x_fireworks_arr[1],y_fireworks_arr[1],color[1]);
		
		if(i>=100 && color[2] !=RED){
			color[2]=RED;
		}
		else if (i>=100 && color[2]==RED){
			color[2]=YELLOW;
		}
		
		Kieu3(x_fireworks_arr[2],y_fireworks_arr[2],color[2],i);
		
		if(i>=100 && color[3] !=RED){
			color[3]=RED;
		}
		else if (i>=100 && color[3]==RED){
			color[3]=YELLOW;
		}
		Kieu4(x_fireworks_arr[3],y_fireworks_arr[3],color[3],i);
		if(i>=100 && color[4] !=LIGHTRED){
			color[4]=LIGHTRED;
		}
		else if (i>=100 && color[4]==LIGHTRED){
			color[4]=YELLOW;
		}
		Kieu5(x_fireworks_arr[4],y_fireworks_arr[4],color[4],i);
		delay(50);
		}
	}
int main(){ 
	initwindow(1000,700);
	HWND hwnd = GetForegroundWindow();
	SetWindowText(hwnd,"Le Xuan Hieu & Kieu Van Huy");
	//Hien thi dem nguoc
	char dem_nguoc[10];
	setcolor(RED);
	settextstyle(4,HORIZ_DIR,10);
	for(int i=3;i>=1;i--){
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\stop-13692.wav"),NULL,SND_SYNC); 
		sprintf(dem_nguoc,"%d",i);
		outtextxy(getmaxx()/2-textwidth(dem_nguoc)/2,getmaxy()/2-textheight(dem_nguoc)/2,dem_nguoc);
		delay(1000);
		cleardevice();
	}
	cleardevice();
	int kieu_ban;
	int y= 150;
	// tao mang vi tri x va y cua phao hoa
	int n =5;
	int x_fireworks_arr[n];
	int y_fireworks_arr[n];
	int y_sosanh_maxy[n];
	int color_arr[n];
	while(!kbhit()){
		int x_fireworks = rand()%getmaxx();
		
		for(int i= 0 ;i <n;i++){
			//tao vi tri ngau nhien
			x_fireworks_arr[i] = rand()%(getmaxx()-300);
			
			if(x_fireworks_arr[i]<150){
			x_fireworks_arr[i]+=300;
			}
			y_fireworks_arr[i] = rand()%300;
			if(y_fireworks_arr[i]<50){
				y_fireworks_arr[i]+=200;
			}
			//neu vi tri y cua phao hoa lon hon or nho hon 150 thì cong tru tuong ung nghennnnn
			if(y_fireworks_arr[i]>y){
				y_sosanh_maxy[i]= y_fireworks_arr[i]-y;
			}
			else{
				y_sosanh_maxy[i]= y-y_fireworks_arr[i];
			}
			
			color_arr[i]= rand()%16;
			if(color_arr[i]==0){
				color_arr[i]=3;
			}
			
		}
		
		if(x_fireworks<50){
			x_fireworks+=300;
		}
	
		PlaySound(TEXT("D:\\DoHoaMayTinh\\CuoiMon\\tiengphong.wav"),NULL,SND_ASYNC);
		setlinestyle(0,2,THICK_WIDTH);
		for(int i = getmaxy() ; i>=y ;i=i-5){
			for(int j = 0;j<n;j++){
				setcolor(color_arr[j]);
				if(y_fireworks_arr[j]>y){
					line(x_fireworks_arr[j],i + y_sosanh_maxy[j],x_fireworks_arr[j],i-30 + y_sosanh_maxy[j]);
				} 
				else{
					line(x_fireworks_arr[j],i - y_sosanh_maxy[j],x_fireworks_arr[j],i-30 - y_sosanh_maxy[j]);
				}
			}
			delay(500);
			for(int j = 0;j<n;j++){
				setcolor(0);
				if(y_fireworks_arr[j]>y){
					line(x_fireworks_arr[j],i + y_sosanh_maxy[j],x_fireworks_arr[j],i-30 + y_sosanh_maxy[j]);
				} 
				else{
					line(x_fireworks_arr[j],i - y_sosanh_maxy[j],x_fireworks_arr[j],i-30 - y_sosanh_maxy[j]);
				}
			}
		}
		kieu_ban=rand()%5;
		PhaoHoa2(x_fireworks_arr,y_fireworks_arr,color_arr);
		//PhaoHoa(kieu_ban,x_fireworks,y,color_arr[0]);
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}
