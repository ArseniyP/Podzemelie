#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

const int xc=32; //����� ������� ����������
const int yc=22; //������ ������� ����������
int yX[yc][xc]={  //���������� ���������
	10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
	10, 20, 10, 20, 20, 20, 20, 20, 20, 20, 10, 20, 10, 20, 10, 20, 20, 20, 10, 20, 20, 20, 20, 10, 20, 10, 10, 20, 20, 20, 20, 10,
	10, 20, 10, 20, 10, 10, 10, 20, 10, 20, 10, 20, 20, 20, 10, 10, 10, 20, 10, 20, 20, 10, 20, 10, 20, 20, 20, 20, 10, 10, 20, 10,
	10, 20, 20, 20, 20, 20, 10, 10, 10, 20, 20, 20, 10, 20, 20, 20, 20, 20, 10, 10, 20, 10, 20, 10, 20, 10, 20, 10, 10, 10, 20, 10,
	10, 10, 20, 10, 10, 20, 20, 20, 10, 10, 20, 10, 10, 20, 10, 10, 20, 20, 20, 20, 20, 20, 20, 20, 20, 10, 20, 20, 20, 20, 20, 10,
	10, 20, 20, 20, 10, 10, 10, 10, 10, 10, 20, 10, 20, 20, 20, 10, 20, 10, 10, 10, 20, 10, 10, 10, 20, 20, 20, 10, 10, 20, 10, 10,
	10, 20, 10, 20, 10, 20, 20, 20, 20, 20, 20, 20, 20, 10, 20, 20, 20, 20, 20, 10, 20, 20, 20, 10, 20, 10, 10, 10, 20, 20, 20, 10,
	10, 10, 10, 20, 10, 10, 10, 20, 10, 10, 20, 10, 10, 10, 20, 10, 10, 10, 20, 20, 20, 10, 20, 20, 20, 20, 20, 20, 20, 10, 20, 10,
	10, 30, 10, 20, 10, 20, 10, 20, 10, 10, 20, 10, 10, 20, 20, 20, 10, 20, 20, 10, 20, 10, 20, 10, 10, 10, 20, 10, 20, 20, 20, 10,
	10, 20, 10, 20, 10, 20, 10, 10, 10, 20, 20, 20, 20, 20, 10, 20, 20, 20, 10, 10, 20, 20, 20, 20, 20, 10, 20, 10, 10, 10, 10, 10,
	10, 20, 20, 20, 20, 20, 20, 20, 10, 20, 10, 20, 10, 20, 10, 20, 10, 20, 10, 10, 20, 10, 10, 10, 20, 20, 20, 20, 20, 20, 20, 10,
	10, 20, 10, 20, 10, 10, 10, 10, 20, 20, 20, 20, 10, 20, 20, 20, 10, 20, 20, 20, 20, 20, 20, 20, 20, 10, 10, 10, 20, 10, 20, 10,
	10, 20, 10, 20, 20, 20, 20, 10, 10, 70, 10, 10, 10, 10, 20, 10, 10, 10, 20, 10, 20, 10, 20, 10, 20, 10, 20, 10, 20, 10, 20, 10,
	10, 20, 10, 20, 10, 10, 10, 10, 20, 20, 20, 10, 20, 20, 20, 20, 20, 10, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 10,
	10, 20, 20, 20, 20, 20, 20, 10, 20, 10, 20, 10, 10, 20, 10, 10, 20, 10, 20, 10, 10, 20, 10, 10, 20, 10, 20, 10, 10, 10, 20, 10,
	10, 10, 20, 10, 10, 10, 20, 10, 20, 20, 60, 10, 20, 20, 20, 10, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 10, 20, 20, 20, 10,
	10, 10, 20, 20, 20, 20, 20, 10, 10, 10, 10, 10, 20, 10, 20, 20, 20, 10, 10, 20, 10, 10, 20, 10, 10, 10, 20, 10, 10, 10, 10, 10,
	10, 10, 20, 10, 10, 10, 20, 10, 20, 20, 20, 10, 20, 10, 20, 10, 20, 20, 10, 20, 10, 10, 20, 20, 20, 10, 20, 20, 20, 10, 40, 10,
	10, 20, 20, 10, 20, 10, 20, 20, 20, 10, 20, 10, 20, 20, 20, 20, 10, 20, 20, 20, 10, 20, 20, 10, 20, 20, 20, 10, 20, 10, 20, 10,
	10, 10, 10, 10, 20, 10, 20, 10, 10, 10, 20, 10, 20, 10, 20, 10, 10, 10, 10, 20, 10, 20, 10, 10, 20, 10, 10, 10, 10, 10, 20, 10,
	10, 20, 20, 20, 20, 20, 20, 20, 20, 10, 20, 20, 20, 10, 20, 20, 20, 10, 20, 20, 20, 20, 20, 10, 20, 50, 20, 20, 20, 20, 20, 10,
	10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
};
int igrokx=0; //x ������
int igroky=0; //y ������
int igrok[10]={
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void randomlyTeleport();
void conclusionLabyrinth();
void playerSelection();
void see(int igroky, int igrokx);
void open(int zrenie, int igroky, int igrokx);
void step(int igroky1, int igrokx1);
void vixod();

/*********************************************************************************************************************/

int main(){
	setlocale(LC_ALL,"rus");
	srand(time(0));
	int key=0;
	int zrenie=3;
	cout<<"����� ����?"<<endl;
	system("pause");
	system("cls");

	randomlyTeleport();
	while (1){
		open(zrenie, igroky-1, igrokx);
		open(zrenie, igroky+1, igrokx);
		open(zrenie, igroky, igrokx-1);
		open(zrenie, igroky, igrokx+1);
		conclusionLabyrinth();
		playerSelection();
		if (igrok[0]==1)
			break;
	}
	system("cls");
	cout<<"�� ������ ������� ������� �� ����"<<endl;
	cout<<"� �� ������� ����� ����"<<endl;
	cout<<"��� ���� �� ������������ ��� ���� ���������� ����"<<endl;
	cout<<"����������� �� ������� �� ������ ������� ����� �����"<<endl;
	cout<<"�����������"<<endl;
	cout<<"1 ��� �������"<<endl;
	cout<<"To be continued"<<endl;
	system("pause");
	return 0;
}

/*********************************************************************************************************************/
//����� ���������
void conclusionLabyrinth(){
	setlocale(LC_CTYPE,"C");
	int key=0;
	for (int y=yc-1; y>=0; y--){ 
		if (y<=9) cout<<"0"<<y<<" ";
		else cout<<y<<" ";
		for (int x=0; x<=xc-1; x++){
			key=yX[y][x];
			switch (key){
			case 11:
				cout<<(char) 178;
				break;
			case 21:
				cout<<" ";
				break;
			case 31:
				cout<<(char) 190;
				break;
			case 41:
				cout<<(char) 15;
				break;
			case 51:
				cout<<(char) 204;
				break;
			case 61:
				cout<<(char) 35;
				break;
			case 70:
				cout<<"?";
				break;
			case 71:
				cout<<" ";
				break;
			case 73:
				cout<<(char) 176;
				break;
			case 81:
				cout<<(char) 1;
				break;
			default:
				cout<<"?";
				break;
			}
			/*if (yX[y][x]==11) cout<<(char) 2;
			else if (yX[y][x]==81) cout<<"*";
			else if (yX[y][x]==21) cout<<" ";
			else cout<<"?";*/

		}
		cout<<endl;
	}
	cout<<endl<<"   "; // ����� x
	for (int x=0; x<=xc-1; x++){
		if (x<=9) cout<<"0";
		else cout<<x/10;
	}
	cout<<endl;
	cout<<"   ";
	for (int x=0; x<=xc-1; x++){
		if (x<=9) cout<<x;
		else cout<<x%10;
	}
	cout<<endl;
	setlocale(LC_ALL,"rus");
}
/*********************************************************************************************************************/
//�������� �����
void open(int zrenie, int igroky1, int igrokx1){
	int key=0;
	zrenie--;
	key=yX[igroky1][igrokx1]/10;
	switch (key){
	case 1:
		yX[igroky1][igrokx1]=11;
		break;
	case 2:
		yX[igroky1][igrokx1]=21;
		if (zrenie>=1){
			open(zrenie, igroky1+1, igrokx1);
			open(zrenie, igroky1-1, igrokx1);
			open(zrenie, igroky1, igrokx1+1);
			open(zrenie, igroky1, igrokx1-1);
		}
		break;
	case 3:
		yX[igroky1][igrokx1]=31;
		break;
	case 4:
		yX[igroky1][igrokx1]=41;
		break;
	case 5:
		yX[igroky1][igrokx1]=51;
		break;
	case 6:
		yX[igroky1][igrokx1]=61;
		break;
	case 7:
		if (yX[igroky1][igrokx1]==70)
		yX[igroky1][igrokx1]=71;
		break;
	}
} 
/*********************************************************************************************************************/
//�� ��� ������ �� �����
void see(int igroky, int igrokx){
	int key=0;
	key=yX[igroky][igrokx]/10;
	switch (key){
	case 1:
		cout<<"�����"<<endl;
		break;
	case 2:
		cout<<"������"<<endl;
		break;
	case 3:
		cout<<"����"<<endl;
		break;
	case 4:
		cout<<"�����"<<endl;
		break;
	case 5:
		cout<<"�������� �����"<<endl;
		break;
	case 6:
		cout<<"������� ����������"<<endl;
		break;
	case 7:
		if (yX[igroky][igrokx]==73)
		cout<<"�����"<<endl;
		else cout<<"������"<<endl;
		break;
	}
} 
/*********************************************************************************************************************/
//����� ������
void playerSelection(){
	int key=0;//����� �����������
	cout<<"����� ����� �� ������ ";
	see(igroky+1, igrokx);
	cout<<"����� �� ������ ";
	see(igroky, igrokx-1);
	cout<<"������ �� ������ ";
	see(igroky, igrokx+1);
	cout<<"�� ����� �� ������ ";
	see(igroky-1, igrokx);
	while (1){
		key=getch();
		key=getch();
		yX[igroky][igrokx]=21;
		switch (key){
		case 72:
			step(igroky+1, igrokx);
			break;
		case 80:
			step(igroky-1, igrokx);
			break;
		case 75:
			step(igroky, igrokx-1);
			break;
		case 77:
			step(igroky, igrokx+1);
			break;
		default:
			cout<<"���������� ���������� ���������"<<endl;
			continue;
			break;
		}
		break;
	}
	yX[igroky][igrokx]=81;
}
/*********************************************************************************************************************/
//��������� ��������
void randomlyTeleport(){
	if (yX[igroky][igrokx]=81) yX[igroky][igrokx]=21;
	while(1){
		igrokx=rand()%(xc)+1;
		igroky=rand()%(xc)+1;
		if ((yX[igroky][igrokx]==20) || (yX[igroky][igrokx]==21)){
			yX[igroky][igrokx]=81;
			break;
		}
	}
}
/*********************************************************************************************************************/
//���
void step(int igroky1, int igrokx1){
	switch (yX[igroky1][igrokx1]){
	case 11:
		system("cls");
		cout<<"�� �� ������ �������� � ���� �����������"<<endl;
		break;
	case 21:
		yX[igroky][igrokx]=21;
		igroky=igroky1;
		igrokx=igrokx1;
		system("cls");
		break;
	case 31:
		igrok[1]=1;
		yX[igroky][igrokx]=21;
		igroky=igroky1;
		igrokx=igrokx1;
		system("cls");
		cout<<"�� ������� ����"<<endl;
		cout<<"��������� ��� �� ���������"<<endl;
		break;
	case 41:
		igrok[0]=1;
		break;
	case 51:
		if (igrok[1]==1){
			yX[igroky][igrokx]=21;
			igroky=igroky1;
			igrokx=igrokx1;
			system("cls");
			cout<<"������� ���� �������"<<endl;
			cout<<"����� ���������"<<endl;
		}
		else {
			system("cls");
			cout<<"����� ����� ���� �������"<<endl;
			cout<<"��� ����� ����"<<endl;
		}
		break;
	case 61:
		randomlyTeleport();
		system("cls");
		cout<<"�� ������� ����� �������"<<endl;
		cout<<"� ����� ������� ����� ��������� � ������ �����"<<endl;
		break;
	case 71:
		yX[igroky][igrokx]=73;
		igroky=igroky1;
		igrokx=igrokx1;
		system("cls");
		cout<<"����� �������� ��������"<<endl;
		cout<<"�� ������� ���� ����������� �����"<<endl;
		cout<<"����� �� ��������������� ����� �� ������ ��������� ������"<<endl;
		break;
	case 73:
		system("cls");
		cout<<"������� ��������� ����� ��������� ������������"<<endl;
		break;
	default:
		cout<<"?";
		break;
		
	}
}
