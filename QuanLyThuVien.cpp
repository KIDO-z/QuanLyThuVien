#include <iostream>
#include <string>
using namespace std;


//________________________ Doc Gia ________________________//

//------------- Ham them doc gia ------------------//

void ThemDocGia(int& docgia, string Madocgia[50], string Hoten[50], string CMND[50], int Ngay[50], int Thang[50], int Nam[50], int Gioitinh[50], string Email[50], string Diachi[50], int ngaylapthe[50], int thanglapthe[50], int namlapthe[50], int ngayhethan[50], int thanghethan[50], int namhethan[50])
{
	fflush(stdin);
	cout << "\n______________ THEM DOC GIA THU " << docgia + 1 << " VAO DANH SACH ______________\n\n";
	cout << "Ho & Ten: ";

	getline(cin, Hoten[docgia]);

	cout << "Ma So: ";
	getline(cin, Madocgia[docgia]);

	cout << "CMND: ";
	getline(cin, CMND[docgia]);

	cout << "Email: ";
	getline(cin, Email[docgia]);

	cout << "Dia chi: ";
	getline(cin, Diachi[docgia]);

	cout << "Ngay sinh:" << endl;
	cout << "\tNgay: ";
	cin >> Ngay[docgia];
	cout << "\tThang: ";
	cin >> Thang[docgia];
	cout << "\tNam: ";
	cin >> Nam[docgia];

	cout << "Gioi tinh(Nam = 1 / Nu = 0): ";
	cin >> Gioitinh[docgia];

	cout << "Ngay Lap The:" << endl;
	cout << "\tNgay: ";
	cin >> ngaylapthe[docgia];
	cout << "\tThang: ";
	cin >> thanglapthe[docgia];
	cout << "\tNam: ";
	cin >> namlapthe[docgia];

	cout << "Ngay Het Han:" << endl;
	cout << "\tNgay: ";
	cin >> ngayhethan[docgia];
	cout << "\tThang: ";
	cin >> thanghethan[docgia];
	cout << "\tNam: ";
	cin >> namhethan[docgia];
	docgia++;
	cin.ignore();
}


//--------------------- Ham sua thong tin doc gia ----------------------//

void SuaDocGia(string key, int& docgia, string Hoten[50], string Madocgia[50], string CMND[50], int Ngay[50], int Thang[50], int Nam[50], int Gioitinh[50], string Email[50], string Diachi[50], int ngaylapthe[50], int thanglapthe[50], int namlapthe[50], int ngayhethan[50], int thanghethan[50], int namhethan[50])
{
	fflush(stdin);
	for (int i = 0; i < docgia; i++)
	{

		cout << "\n\nEnter De Xac Nhan\n\n\n\n";
		cin.ignore();
		system("cls");
		if (key.compare(Hoten[i]) == 0)   // So sanh 2 chuoi string key voi Hoten[ten]
		{

			cout << endl << "\n______________" << Hoten[i] << "______________" << endl << endl;
			cout << "Ho & Ten: ";
			getline(cin, Hoten[i]);
			cout << "Ma So: ";
			getline(cin, Madocgia[i]);
			cout << "CMND: ";
			getline(cin, CMND[i]);
			cout << "Ngay sinh:" << endl;
			cout << "\tNgay: ";
			cin >> Ngay[i];
			cout << "\tThang: ";
			cin >> Thang[i];
			cout << "\tNam: ";
			cin >> Nam[i];
			cout << "Gioi tinh (Nam = 1 / Nu = 0): ";
			cin >> Gioitinh[i];
			
			cin.ignore();
			cout << "Email: ";
			getline(cin, Email[i]);
			cout << "Dia chi: ";
			getline(cin, Diachi[i]);
			
			cout << "Ngay lap the:" << endl;
			cout << "\tNgay: ";
			cin >> ngaylapthe[i];
			cout << "\tThang: ";
			cin >> thanglapthe[i];
			cout << "\tNam: ";
			cin >> namlapthe[i];
			
			cout << "Ngay Het Han:" << endl;
			cout << "\tNgay: ";
			cin >> ngayhethan[docgia];
			cout << "\tThang: ";
			cin >> thanghethan[docgia];
			cout << "\tNam: ";
			cin >> namhethan[docgia];
			cin.ignore();
		}
	}
}

//-------------------------- Ham xoa thong tin doc gia ---------------------------//

int XoaDocGia(int& docgia, string key, string Hoten[50], string Madocgia[50], string CMND[50], int Ngay[50], int Thang[50], int Nam[50], int Gioitinh[50], string Email[50], string Diachi[50], int ngaylapthe[50], int thanglapthe[50], int namlapthe[50], int ngayhethan[50], int thanghethan[50], int namhethan[50])
{
	fflush(stdin);
	int dem = docgia;
	for (int i = 0; i < docgia; i++)
	{
		if (key.compare(Hoten[i]) == 0)
		{
			Hoten[i] = Hoten[i + 1];
			Madocgia[i] = Madocgia[i + 1];
			CMND[i] = CMND[i + 1];
			
			Ngay[i] = Ngay[i + 1];
			Thang[i] = Thang[i + 1];
			Nam[i] = Nam[i + 1];
			
			Gioitinh[i] = Gioitinh[i + 1];
			Email[i] = Email[i + 1];
			Diachi[i] = Diachi[i + 1];
			
			ngaylapthe[i] = ngaylapthe[i + 1];
			thanglapthe[i] = thanglapthe[i + 1];
			namlapthe[i] = namlapthe[i + 1];
			
			ngayhethan[i] = ngayhethan[i + 1];
			thanghethan[i] = thanghethan[i + 1];
			namhethan[i] = namhethan[i + 1];
			docgia--;
			return i;
		}
		else
		{
			dem++;
		}
	}
	return dem;
}

//---------------------- Ham xem doc gia ----------------------------//

void XemDocGia(int docgia, string Madocgia[50], string Hoten[50], string CMND[50], int Ngay[50], int Thang[50], int Nam[50], int Gioitinh[50], string Email[50], string Diachi[50], int ngaylapthe[50], int thanglapthe[50], int namlapthe[50], int ngayhethan[50], int thanghethan[50], int namhethan[50])
{
	fflush(stdin);
	cout << endl;
	for (int i = 0; i < docgia; i++)
	{
		cout << i + 1 << ". " << "Thong tin doc gia thu "<< i + 1 << " la:" << endl;
		cout << "Ho & Ten                   : " << Hoten[i] << endl;
		cout << "Ma doc gia                 : " << Madocgia[i] << endl;
		cout << "CMND                       : " << CMND[i] << endl;
		cout << "Gioi tinh(Nam = 1 / Nu = 0): " << Gioitinh[i] << endl; 
		cout << "Ngay sinh                  : " << Ngay[i] << "/" << Thang[i] << "/" << Nam[i] << endl;
		cout << "Email                      : " << Email[i] << endl;
		cout << "Dia chi                    : " << Diachi[i] << endl;
		cout << "Ngay lap the               : " << ngaylapthe[i] << "/" << thanglapthe[i] << "/" << namlapthe[i] << endl;
		cout << "Ngay het han               : " << ngayhethan[i] << "/" << thanghethan[i] << "/" << namhethan[i] << endl; 
		cout << endl;
	}
	if (docgia == 0)
	{
		cout << "Khong co Doc Gia nao trong danh sach.";
	}
}



//______________________________Sach______________________________//

//------------------ So sach co trong thu vien -----------------//

void SoSach(int sach, string TenSach[50])
{
	fflush(stdin);
	system("cls");
	for (int i = 0; i < sach; i++)
	{
		cout << i + 1 << ". " << TenSach[i] << endl;
	}
	if (sach == 0)
	{
		cout << "\n\n\t\t\t\t\t\tThu vien rong...!!!\n\n";
	}

}

//---------------------- Ham them sach vao thu vien -------------------------//

void ThemSach(int& sach, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], int ngaysx[50], int thangsx[50], int namsx[50], string TheLoai[50], long GiaSach[50], int SoQuyenSach[50])
{
	fflush(stdin);
	system("cls");
	cout << "Enter de them sach...!!!";
	cin.ignore();
	system("cls");
	cout << "********************Them Thong Tin Sach Thu " << sach + 1 << " Vao Thu Vien*****************\n\n";
	cout << "\nTen Sach: ";
	getline(cin, TenSach[sach]);
	cout << "Ma Sach: ";
	getline(cin, MaSach[sach]);
	cout << "The Loai: \n";
	cout << "\t1.Tieu Thuyet\n";
	cout << "\t2.Tai Lieu\n";
	cout << "\t3.Truyen Co Tich\n";
	cout << "\t4.Khoa Hoc\n";
	cout << "\t5.Giao Trinh\n";
	cout << "\t6.Dong Vat\n\n";
	cout << "   =>Chon the loai: ";
	getline(cin, TheLoai[sach]);
	cout << "Tac Gia: ";
	getline(cin, TacGia[sach]);
	cout << "Nha San Xuat: ";
	getline(cin, NhaSanXuat[sach]);
	cout << "Ngay San Xuat:\n";
	cout << "\tNgay: ";
	cin >> ngaysx[sach];
	cout << "\tThang: ";
	cin >> thangsx[sach];
	cout << "\tNam: ";
	cin >> namsx[sach];
	cout << "Gia Sach: ";
	cin >> GiaSach[sach];
	cout << "So Quyen Sach: ";
	cin >> SoQuyenSach[sach];
	sach++;
	cin.ignore();
}

//------------------------------ Ham xoa sach co trong thu vien -----------------------------//

void XoaSach(int key, int& sach, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], int ngaysx[50], int thangsx[50], int namsx[50], string TheLoai[50], long GiaSach[50], int SoQuyenSach[50])
{
	fflush(stdin);
	if (key > sach || key <= 0)
	{
		cout << "\nGia tri " << key << " khong ton tai...!!!";
	}
	else
	{
		cout << "Quyen sach " << TenSach[key - 1] << " duoc xoa khoi danh sach...!!!";
		MaSach[key - 1] = MaSach[key];
		TenSach[key - 1] = TenSach[key];
		TacGia[key - 1] = TacGia[key];
		NhaSanXuat[key - 1] = NhaSanXuat[key];
		ngaysx[key - 1] = ngaysx[key];
		thangsx[key - 1] = thangsx[key];
		namsx[key - 1] = namsx[key];
		TheLoai[key - 1] = TheLoai[key];
		GiaSach[key - 1] = GiaSach[key];
		SoQuyenSach[key - 1] = SoQuyenSach[key];
		sach--;
		cin.ignore();
	}
}

void TimKiemTenSach(string key, int sach, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], int ngaysx[50], int thangsx[50], int namsx[50], string TheLoai[50], long GiaSach[50], int SoQuyenSach[50])
{
	fflush(stdin);
	system("cls");
	int dem = 0;
	for (int i = 0; i < sach; i++)
	{
		if (key.compare(TenSach[i]) == 0)  // So sanh 2 chuoi string key ,vs TenSach[sach]
		{
			cout << "Ma Sach       : " << MaSach[i] << endl;
			cout << "Ten Sach      : " << TenSach[i] << endl;
			cout << "Tac Gia       : " << TacGia[i] << endl;
			cout << "Nha San Xuat  : " << NhaSanXuat[i] << endl;
			cout << "Ngay San Xuat : " << ngaysx[i] << "/" << thangsx[i] << "/" << namsx[i] << endl;
			cout << "The Loai      : " << TheLoai[i] << endl;
			cout << "Gia Sach      : " << GiaSach[i] << endl;
			cout << "So Quyen Sach : " << SoQuyenSach[i] << endl;
			dem = 1;
			break;

		}
	}
	if (dem == 0)
	{
		system("cls");
		cout << "\n\nSach " << key << " khong ton tai...!!!";
	}

}

int main()
{
	
	//----------------------- Doc Gia ----------------------------//
	
	int docgia = 0;
	string Madocgia[50];
	string Hoten[50];
	string CMND[50];
	int Ngay[50];
	int Thang[50];
	int Nam[50];
	int Gioitinh[50];
	string Email[50];
	string Diachi[50];
	int ngaylapthe[50];
	int thanglapthe[50];
	int namlapthe[50];
	int ngayhethan[50];
	int thanghethan[50];
	int namhethan[50];
	
	//----------------------- Sach ------------------------------//
	
	int sach = 0;
	string MaSach[50];
	string TenSach[50];
	string TacGia[50];
	string NhaSanXuat[50];
	int ngaysx[50];
	int thangsx[50];
	int namsx[50];
	string TheLoai[50];
	long GiaSach[50];
	int SoQuyenSach[50];

	
	
	
	while (true)
	{
		system("cls");
		cout << "******************* HE THONG QUAN LY THU VIEN *****************" << endl;
		cout << "\n 1. Quan ly doc gia                                          ";
		cout << "\n 2. Quan ly sach                                             ";
		cout << "\n 3. Thoat                                                    ";
		cout << "\n-------------------------------------------------------------" << endl;
		
		int key;
		cout << "Chon chuc nang: ";
		cin >> key;
		char out;
		if (key == 1)
		{
			while (true)
			{
				system("cls");
				cout << "********************** QUAN LY DOC GIA **********************" << endl;
				cout << "\n 1. Them doc gia                                           ";
				cout << "\n 2. Xoa doc gia                                            ";
				cout << "\n 3. Xem danh sach doc gia                                  ";
				cout << "\n 4. Sua thong tin mot doc gia                              ";
				cout << "\n 5. Thoat                                                  ";
				cout << "\n-----------------------------------------------------------" << endl;
				int keynho1;
				cout << "Chon chuc nang: ";
				cin >> keynho1;
				if (keynho1 == 1)
				{
					system("cls");
					cout << "\n****************** Them Mot Doc Gia Vao Danh Sach ******************\n\n";
					ThemDocGia(docgia, Madocgia, Hoten, CMND, Ngay, Thang, Nam, Gioitinh, Email, Diachi, ngaylapthe, thanglapthe, namlapthe, ngayhethan, thanghethan, namhethan);
				}
				else if (keynho1 == 2)
				{
					system("cls");
					cout << "\n\n***************************** Xoa Thong Tin Doc Gia *************************\n\n";
					cout << endl << endl << "------------- DOC GIA CO TRONG DANH SACH -------------\n\n";
					XemDocGia(docgia, Hoten,Madocgia,CMND, Ngay, Thang, Nam, Gioitinh, Email, Diachi, ngaylapthe, thanglapthe, namlapthe, ngayhethan, thanghethan, namhethan);
					cout << "\n-----------------------------------------------------------------------\nNhap Ho & Ten: ";
					string key;
					getline(cin, key);
					system("cls");
					XoaDocGia(docgia, key, Hoten, Madocgia, CMND, Ngay, Thang, Nam, Gioitinh, Email, Diachi, ngaylapthe, thanglapthe, namlapthe, ngayhethan, thanghethan, namhethan);
					cout << "Xoa doc gia thanh cong!";
					system("pause");
				}
				else if (keynho1 == 3)
				{
					system("cls");
					if(docgia != 0)
					{
						cout << "\n------------- DANH SACH DOC GIA CO TRONG THU VIEN -------------\n";
						XemDocGia(docgia, Madocgia, Hoten, CMND, Ngay, Thang, Nam, Gioitinh, Email, Diachi, ngaylapthe, thanglapthe, namlapthe, ngayhethan, thanghethan, namhethan);
						cout << endl;
						system("pause");
					}	
					else
					{
						cout << " He thong hien tai chua co thong tin Doc gia!!! " << endl;
						system("pause");
					}	
						
				}
				else if (keynho1 == 4)
				{
					system("cls");
					string key;
					cout << "\n\n******** CAC DOC GIA CO TRONG DANH SACH *******\n";
					XemDocGia(docgia, Madocgia, Hoten, CMND, Ngay, Thang, Nam, Gioitinh, Email, Diachi, ngaylapthe, thanglapthe, namlapthe, ngayhethan, thanghethan, namhethan);
					cout << "\n--------------CHON DOC GIA--------------\nGhi Ho & Ten: ";
					getline(cin, key);
					SuaDocGia(key, docgia, Hoten, Madocgia, CMND, Ngay, Thang, Nam, Gioitinh, Email, Diachi, ngaylapthe, thanglapthe, namlapthe, ngayhethan, thanghethan, namhethan);
					cout << "Sua thong tin doc gia thanh cong!" << endl;
					system("pause");
				}
				else if (keynho1 == 5)
				{
					break;
				}
			}

		}
		else if (key == 2)
		{
			while (true)
			{
				system("cls");
				cout << "********************** QUAN LY SACH **********************" << endl;
				cout << "\n 1. Them sach                                           ";
				cout << "\n 2. Xoa sach                                            ";
				cout << "\n 3. Tim kiem sach theo ten                              ";
				cout << "\n 4. Thoat                                               ";
				cout << "\n--------------------------------------------------------" << endl;
				int keynho2;
				cout << "chon chuc nang: ";
				cin >> keynho2;
				if (keynho2 == 1)
				{
					fflush(stdin);
					system("cls");
					ThemSach(sach, MaSach, TenSach, TacGia, NhaSanXuat, ngaysx, thangsx, namsx, TheLoai, GiaSach, SoQuyenSach);
				}
				else if (keynho2 == 2)
				{
					fflush(stdin);
					system("cls");
					cout << "\n\n***************************** Xoa Thong Tin Sach *************************\n\n";
					cout << endl << endl << "-----------------Sach CO TRONG DANH SACH-----------------\n\n";
					SoSach(sach, TenSach);
					cout << "\n----------------------------------------------------------------------------------\nSo Thu Tu Cua Sach: ";
					int key;
					cin >> key;
					system("cls");
					XoaSach(key, sach, MaSach, TenSach, TacGia, NhaSanXuat, ngaysx, thangsx, namsx, TheLoai, GiaSach, SoQuyenSach);
					system("pause");
				}
				else if (keynho2 == 3)
				{
					fflush(stdin);
					system("cls");
					cout << "************************ TIM KIEM SACH ***************************\n\n";
					cout << "Ten Sach: ";
					string key2;
					getline(cin, key2);
					TimKiemTenSach(key2, sach, MaSach, TenSach, TacGia, NhaSanXuat, ngaysx, thangsx, namsx, TheLoai, GiaSach, SoQuyenSach);
					system("pause");
				}
				else if (keynho2 == 4)
				{
					break;
				}	 
			}
		}
		else if (key == 3)
		{
			break;
		}
	}  

	return 0;
}






























