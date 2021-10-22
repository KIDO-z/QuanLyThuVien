#include <iostream>
#include<string>
using namespace std;


//________________________ Doc Gia ________________________//

//------------- Ham them doc gia ------------------//

void ThemDocGia(int& docgia, string Madocgia[50], string Hoten[50], string CMND[50], string Ngaysinh[50], string Gioitinh[50], string Email[50],  string Diachi[50], string Ngaylapthe[50], string Ngayhethan[50])
{
	fflush(stdin);
	system("cls");
	cout << "\n______________ THEM DOC GIA THU " << docgia + 1 << " VAO DANH SACH ______________\n\n";
	
	cout << "Ma So: ";
	getline(cin, Madocgia[docgia]);

	fflush(stdin);
	cout << "Ho & Ten: ";
	getline(cin, Hoten[docgia]);
	
	fflush(stdin);
	cout << "CMND: ";
	getline(cin, CMND[docgia]);
	
	fflush(stdin);
	cout << "Ngay sinh: ";
	getline(cin, Ngaysinh[docgia]);
	
	fflush(stdin);
	cout << "Gioi tinh: ";
	getline(cin, Gioitinh[docgia]);
	
	fflush(stdin);
	cout << "Email: ";
	getline(cin, Email[docgia]);
	
	fflush(stdin);
	cout << "Dia chi: ";
	getline(cin, Diachi[docgia]);
		
	fflush(stdin);
	cout << "Ngay lap the: " ;
	getline(cin, Ngaylapthe[docgia]);
	
	fflush(stdin);
	cout << "Ngay het han: ";
	getline(cin, Ngayhethan[docgia]);
	
	docgia++;
	cin.ignore();
}


//--------------------- Ham sua thong tin doc gia ----------------------//

void SuaDocGia(string key1, int& docgia, string Madocgia[50], string Hoten[50], string CMND[50], string Ngaysinh[50], string Gioitinh[50], string Email[50],  string Diachi[50], string Ngaylapthe[50], string Ngayhethan[50])
{
	fflush(stdin);
	for (int i = 0; i < docgia; i++)
	{
		if (key1.compare(Hoten[i]) == 0)   
		{
			cout << "Nhap ho ten can sua cho Doc Gia";
			cout << "\nHo & Ten moi: ";
			getline(cin, Hoten[i]);
			break;
		}
		else if(key1.compare(Ngaysinh[i]) == 0)
		{
			cout << "Nhap ngay sinh can sua cho Doc Gia";
			cout << "\nNgay sinh moi: ";
			getline(cin, Ngaysinh[i]);
			break;
		}
		else if(key1.compare(Gioitinh[i]) == 0)
		{
			cout << "Nhap gioi tinh can sua cho Doc Gia";
			cout << "\nGioi tinh moi: ";
			getline(cin, Gioitinh[i]);
			break;
		}
		else if(key1.compare(CMND[i]) == 0)
		{
			cout << "Nhap cmnd can sua cho Doc Gia";
			cout << "\nCMND moi: ";
			getline(cin, CMND[i]);
			break;
		}
		else if(key1.compare(Email[i]) == 0)
		{
			cout << "Nhap email can sua cho Doc Gia";
			cout << "\nEmail moi: ";
			getline(cin, Email[i]);
			break;
		}
		else if(key1.compare(Diachi[i]) == 0)
		{
			cout << "Nhap dia chi can sua cho Doc Gia";
			cout << "\nDia chi moi: ";
			getline(cin, Diachi[i]);
			break;
		}
		else if(key1.compare(Ngaylapthe[i]) == 0)
		{
			cout << "Nhap ngay lap the can sua cho Doc Gia";
			cout << "\nNgay lap the moi: ";
			getline(cin, Ngaylapthe[i]);
			break;
		}
		else if(key1.compare(Ngayhethan[i]) == 0)
		{
			cout << "Nhap ngay het han can sua moi cho Doc Gia";
			cout << "\nNgay het han moi: ";
			getline(cin, Ngayhethan[i]);
			break;
		}		
	}

}

//-------------------------- Ham xoa thong tin doc gia ---------------------------//

int XoaDocGia(int& docgia, string key, string Madocgia[50], string Hoten[50], string CMND[50], string Ngaysinh[50], string Gioitinh[50], string Email[50],  string Diachi[50], string Ngaylapthe[50], string Ngayhethan[50])
{
	fflush(stdin);
	int dem = docgia;
	for (int i = 0; i < docgia; i++)
	{
		if (key.compare(Madocgia[i]) == 0)
		{
			Madocgia[i] = Madocgia[i + 1];
			Hoten[i] = Hoten[i + 1];
			CMND[i] = CMND[i + 1];
			Ngaysinh[i] = Ngaysinh[i + 1];
			Gioitinh[i] = Gioitinh[i + 1];
			Email[i] = Email[i + 1];
			Diachi[i] = Diachi[i + 1];
			Ngaylapthe[i] = Ngaylapthe[i + 1];
			Ngayhethan[i] = Ngayhethan[i + 1];
	
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
void XemDanhSachDocGia(int docgia, string Madocgia[50], string Hoten[50], string CMND[50], string Ngaysinh[50], string Gioitinh[50], string Email[50],  string Diachi[50], string Ngaylapthe[50], string Ngayhethan[50])
{
	fflush(stdin);
	cout << endl;
	cout << "   " << "MaDG"<< "\t   Ten DG" << "\t\t  CMND" << "\t\t   Ngay sinh" << "\t\tGT"   << "\t   Email" << "\t  Dia chi" << "\t  Ngay lap the" << "\t\t  Ngay het han" << endl;
	for (int i = 0; i < docgia; i++)
	{
		cout << " | " << Madocgia[i];
		cout << "\t|" << Hoten[i];
		cout << "\t\t|" << CMND[i];
		cout << "\t|" << Ngaysinh[i];
		cout << "\t|" << Gioitinh[i];
		cout << "\t\t|" << Email[i];
		cout << "\t|" << Diachi[i];
		cout << "\t\t|" << Ngaylapthe[i];
		cout << "\t\t|" << Ngayhethan[i] <<"\t\t|"<< endl;
	}
	if (docgia == 0)
	{
		cout << "Khong co Doc Gia nao trong danh sach.";
	}
}

void ThongTinDocGia(int docgia, string key, string Madocgia[50], string Hoten[50], string CMND[50], string Ngaysinh[50], string Gioitinh[50], string Email[50],  string Diachi[50], string Ngaylapthe[50], string Ngayhethan[50])
{
	fflush(stdin);
	cout << endl;
	cout << "   " << "MaDG"<< "\t   Ten DG" << "\t\t  CMND" << "\t\t   Ngay sinh" << "\t\tGT"   << "\t   Email" << "\t  Dia chi" << "\t  Ngay lap the" << "\t\t  Ngay het han" << endl;
	for (int i = 0; i < docgia; i++)
	{
		if (key.compare(Madocgia[i]) == 0)
		{
			cout << " | " << Madocgia[i];
			cout << "\t|" << Hoten[i];
			cout << "\t\t|" << CMND[i];
			cout << "\t|" << Ngaysinh[i];
			cout << "\t|" << Gioitinh[i];
			cout << "\t\t|" << Email[i];
			cout << "\t|" << Diachi[i];
			cout << "\t\t|" << Ngaylapthe[i];
			cout << "\t\t|" << Ngayhethan[i] <<"\t|"<< endl;
		}
	}
}



//______________________________Sach______________________________//

//------------------ So sach co trong thu vien -----------------//

void ThonTinSach(int sach, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], string TheLoai[50], string GiaSach[50])
{
	fflush(stdin);
	cout << "   " << "Ma Sach"<< "\t   Ten Sach" << "\t\tTac Gia" << "\t\t          Nha San Xuat" << "\t\t  The Loai"   << "\t\t  Gia Sach" << endl;
	for (int i = 0; i < sach; i++)
	{
		cout << " | " << MaSach[i];
		cout << "\t|" << TenSach[i];
		cout << "\t\t|" << TacGia[i];
		cout << "\t\t|" << NhaSanXuat[i];
		cout << "\t\t|" << TheLoai[i];
		cout << "\t\t|" << GiaSach[i] <<"\t\t|"<< endl;
	}
	if (sach == 0)
	{
		cout << "\n\n\t\t\t\t\t\tThu vien rong...!!!\n\n";
	}

}

//---------------------- Ham them sach vao thu vien -------------------------//

void ThemSach(int& sach, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], string TheLoai[50], string GiaSach[50])
{
	fflush(stdin);
	system("cls");
	cout << "********************Them Thong Tin Sach Vao Thu Vien*****************\n\n";
	cout << "Ma Sach: ";
	getline(cin, MaSach[sach]);
	cout << "\nTen Sach: ";
	getline(cin, TenSach[sach]);
	cout << "The Loai: \n";
	getline(cin, TheLoai[sach]);
	cout << "Tac Gia: ";
	getline(cin, TacGia[sach]);
	cout << "Nha San Xuat: ";
	getline(cin, NhaSanXuat[sach]);
	cout << "Gia Sach: ";
	getline(cin, GiaSach[sach]);
	
	sach++;
	cin.ignore();
}

//------------------------------ Ham xoa sach co trong thu vien -----------------------------//

int XoaSach(int& sach, string key, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], string TheLoai[50], string GiaSach[50])
{
	fflush(stdin);
	int dem = 0;
	for(int i = 0; i < sach; i++)
	{
		if(key.compare(MaSach[i]) == 0)
		{
			MaSach[i] = MaSach[i+1];
			TenSach[i] = TenSach[i+1];
			TenSach[i] = TenSach[i+1];
			TacGia[i] = TacGia[i+1];
			NhaSanXuat[i] = NhaSanXuat[i+1];
			TheLoai[i] = TheLoai[i+1];
			GiaSach[i] = GiaSach[i+1];
		
			sach--;
			return i;
			
		}
		else
		{
			dem++;
		}
	}
	return dem;
	
}

void TimKiemTenSach(string key, int sach, string MaSach[50], string TenSach[50], string TacGia[50], string NhaSanXuat[50], string TheLoai[50], string GiaSach[50])
{
	fflush(stdin);
	system("cls");
	int dem = 0;
	for (int i = 0; i < sach; i++)
	{
		if (key.compare(TenSach[i]) == 0)  
		{
			cout << " Ma Sach"<< "\t   Ten Sach" << "\t\tTac Gia" << "\t\t          Nha San Xuat" << "\t\t  The Loai"   << "\t  Gia Sach"  << endl;
			cout << "| " << MaSach[i];
			cout << "\t|" << TenSach[i];
			cout << "\t\t|" << TacGia[i];
			cout << "\t\t|" << NhaSanXuat[i];
			cout << "\t\t|" << TheLoai[i];
			cout << "\t|" << GiaSach[i] << "\t\t|"<< endl;
			
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
	string Ngaysinh[50];
	string Gioitinh[50];
	string Email[50];
	string Diachi[50];
	string Ngaylapthe[50];
	string Ngayhethan[50];
	
	docgia = 4;
	
	//Thong tin doc gia 1
	Madocgia[0] = "A01";                    
	Hoten[0] = "Nguyen Van Nam";      
	CMND[0] = "123456789";               
	Ngaysinh[0] = "22/2/2000";           
	Gioitinh[0] = "Nam";           
	Email[0] = "nam@gmail.com";      
	Diachi[0] = "Ha Noi";               
	Ngaylapthe[0] = "22/3/2020";      
	Ngayhethan[0] = "24/3/2021";      
	
	//Thong tin doc gia 2
	Madocgia[1] = "A02";
	Hoten[1] = "Dang Minh Anh";
	CMND[1] = "345456789";
	Ngaysinh[1] = "14/6/2000";
	Gioitinh[1] = "Nu";
	Email[1] = "anh@gmail.com";
	Diachi[1] = "Ha Noi";
	Ngaylapthe[1] = "2/6/2020";
	Ngayhethan[1] = "24/3/2021";
	
	//Thong tin doc gia 3
	Madocgia[2] = "A03";
	Hoten[2] = "Pham Van Nam";
	CMND[2] = "001289724";
	Ngaysinh[2] = "14/6/2001";
	Gioitinh[2] = "Nam";
	Email[2] = "nam@gmail.com";
	Diachi[2] = "Ha Noi";
	Ngaylapthe[2] = "2/8/2020";
	Ngayhethan[2] = "24/2/2021";
	
	//Thong tin doc gia 4
	Madocgia[3] = "A04";
	Hoten[3] = "Pham Thi Thuc";
	CMND[3] = "001289724";
	Ngaysinh[3] = "14/6/2000";
	Gioitinh[3] = "Nu";
	Email[3] = "thuc@gmail.com";
	Diachi[3] = "";
	Ngaylapthe[3] = "2/3/2020";
	Ngayhethan[3] = "24/2/2021";
	
	//----------------------- Sach ------------------------------//
	
	int sach = 0;
	string MaSach[50];
	string TenSach[50];
	string TacGia[50];
	string NhaSanXuat[50];
	string TheLoai[50];
	string GiaSach[50];
	


	sach = 3;
	
	// thong tin sach 1
	MaSach[0] = "B01";
	TenSach[0] = "Toan Roi Rac";
	TacGia[0] = "Nguyen Van Phong";
	NhaSanXuat[0] = "Giao Duc VN";
	TheLoai[0] = "Giao Trinh";
	GiaSach[0] = "50.000 vnd";
	
	
	// thong tin sach 2
	MaSach[1] = "B02";
	TenSach[1] = "CTDL & GT";
	TacGia[1] = "Nguyen Duc Ngia";
	NhaSanXuat[1] = "Bach Khoa HN";
	TheLoai[1] = "Giao Trinh";
	GiaSach[1] = "89.000 vnd";
	
	// thong tin sach 3
	MaSach[2] = "B03";
	TenSach[2] = "Nha Gia Kim";
	TacGia[2] = "Nguyen Khanh Linh";
	NhaSanXuat[2] = "Van Hoc";
	TheLoai[2] = "Tieu Thuyet";
	GiaSach[2] = "89.000 vnd";
	
	
	
	
	
	
	while (true)
	{
		system("cls");
		cout << "*********************************** HE THONG QUAN LY THU VIEN ***********************************";
		cout << "\n**     1. Quan ly doc gia                                                                      **";
		cout << "\n**     2. Quan ly sach                                                                         **";
		cout << "\n**     3. Thoat                                                                                **";
		cout << "\n**---------------------------------------------------------------------------------------------**" << endl;
		
		int key;
		cout << "Chon chuc nang: ";
		cin >> key;
		char out;
		if (key == 1)
		{
			while (true)
			{
				
				cout << "\n\n*********************** QUAN LY DOC GIA ***********************";
				cout << "\n**     1. Them doc gia                                       **";
				cout << "\n**     2. Xoa doc gia                                        **";
				cout << "\n**     3. Xem danh sach doc gia                              **";
				cout << "\n**     4. Sua thong tin mot doc gia                          **";
				cout << "\n**     5. Thoat                                              **";
				cout << "\n**-----------------------------------------------------------**" << endl;
				int keynho1;
				cout << "Chon chuc nang: ";
				cin >> keynho1;
				if (keynho1 == 1)
				{
					system("cls");
					cout << "\n****************** Them Mot Doc Gia Vao Danh Sach ******************\n\n";
					ThemDocGia(docgia, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
					cout << "Them doc gia thanh cong!";
					system("pause");
					system("cls");
				}
				else if (keynho1 == 2)
				{
					system("cls");
					cout << "\n\n***************************************************** XOA THONG TIN DOC GIA *****************************************************\n\n";
					cout << "\n--------------------------------------------- DANH SACH DOC GIA CO TRONG THU VIEN ---------------------------------------------\n";
					XemDanhSachDocGia(docgia, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
					cout << "\n-----------------------------------------------------------------------\nNhap ten Doc gia de xoa: ";
					string key;
					getline(cin, key);
					system("cls");
					XoaDocGia(docgia, key, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
					cout << "Xoa doc gia thanh cong!";
					system("pause");
					system("cls");
				}
				else if (keynho1 == 3)
				{
					system("cls");
					if(docgia != 0)
					{
						cout << "\n--------------------------------------------- DANH SACH DOC GIA CO TRONG THU VIEN ---------------------------------------------\n";
						XemDanhSachDocGia(docgia, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
						system("pause");
						system("cls");
					}	
					else
					{
						cout << "He thong hien tai chua co thong tin Doc gia!!! " << endl;
						system("pause");
					}	
						
				}
				else if (keynho1 == 4)
				{
					system("cls");
					cout << "\n--------------------------------------------- DANH SACH DOC GIA CO TRONG THU VIEN ---------------------------------------------\n";
					XemDanhSachDocGia(docgia, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
					cout << "\nNhap ma Doc Gia: ";
					string key;
					getline(cin, key);
					system("cls");
					ThongTinDocGia(docgia, key, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
					cout << "\n\nNhap thong tin sai can sua: ";
					string key1;
					getline(cin, key1);
					cout << endl;
					SuaDocGia(key1, docgia, Madocgia, Hoten, CMND, Ngaysinh, Gioitinh, Email, Diachi, Ngaylapthe, Ngayhethan);
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
				cout << "\n\n*********************** QUAN LY SACH ***********************";
				cout << "\n** 1. Them sach                                           **";
				cout << "\n** 2. Xoa sach                                            **";
				cout << "\n** 3. Tim kiem sach                                       **";
				cout << "\n** 4. Danh sach sach trong thu vien                       **";
				cout << "\n** 5. Thoat                                               **";
				cout << "\n**--------------------------------------------------------**" << endl;
				int keynho2;
				cout << "chon chuc nang: ";
				cin >> keynho2;
				if (keynho2 == 1)
				{
					fflush(stdin);
					system("cls");
					ThemSach(sach, MaSach, TenSach, TacGia, NhaSanXuat, TheLoai, GiaSach);
					system("cls");
				}
				else if (keynho2 == 2)
				{
					fflush(stdin);
					system("cls");
					cout << "\n\n************************************************************** XOA THONG TIN SACH **************************************************************\n\n";
					cout << endl << endl << "------------------------------------------------ DANH SACH CAC DAU SACH TRONG THU VIEN ------------------------------------------------\n\n";
					ThonTinSach(sach, MaSach, TenSach, TacGia, NhaSanXuat, TheLoai, GiaSach);
					cout << "\n-----------------------------------------------------------------------------------------------------------------------------------\nNhap ma sach: ";
					string key;
					getline(cin, key);
					XoaSach(sach, key, MaSach, TenSach, TacGia, NhaSanXuat, TheLoai, GiaSach);
					cout << "\nXoa thong tin sach thanh cong!!!";
					system("pause");
					system("cls");
				}
				else if (keynho2 == 3)
				{
					fflush(stdin);
					system("cls");
					cout << "************************ TIM KIEM SACH ***************************\n\n";
					cout << "Ten Sach: ";
					string key2;
					getline(cin, key2);
					TimKiemTenSach(key2, sach, MaSach, TenSach, TacGia, NhaSanXuat, TheLoai, GiaSach);
					system("pause");
					system("cls");
				}
				else if (keynho2 == 4)
				{
					fflush(stdin);
					system("cls");
					cout << "***************************************************** DANH SACH CAC DAU SACH TRONG THU VIEN *****************************************************\n" << endl;
					ThonTinSach(sach, MaSach, TenSach, TacGia, NhaSanXuat, TheLoai, GiaSach);
					system("pause");
					system("cls");
				}
				else if (keynho2 == 5)
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

































