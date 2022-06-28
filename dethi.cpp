#include<stdio.h>
#include<math.h>

//bai thi ket thuc hoc phan cua NGUYEN QUANG DAO 2021608341
int k;
void Nhap_mang(int a[], int n) {
	for(int i = 1; i <= n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void Xuat_mang(int a[], int n) {
	for(int i = 1; i <= n; i++) {
		printf("%d\t", a[i]);
	}
}
void Negative(int a[], int n, int y) {
	int sum, tong = 0;
	float TBC;
	for(int i = 1; i <= n; i++) {
		if(a[i] < 0 && a[i] != y ) {
			sum++;
			tong += a[i];
		}
	}
	TBC = (float)(tong/sum);
	if(sum != 0) {
		printf("\nCac phan tu am khac y co trong mang la: ");
		for(int i = 1; i <= n; i++) {
			if(a[i] < 0&& a[i] != y ) {
				printf("a[%d]= %d\t",i, a[i]);
			}
		}
		printf("\nTong cac so am khac y la: %d", tong);
		printf("\nTBC cac so am khac y la: %.2f", TBC);
	} else if(sum == 0 ) {
		printf("Mang khong co phan tu am khac y!!!");
	}
}
void Positive(int a[], int n) {
	for(int i = 1; i<= n; i++) {
		if(a[i]>0) {
			k = i;
			break;
		}
	}
}
void Del(int a[], int n) {
	for(int i = k; i <= n; i++) {
		a[i-1]=a[i];
	}
	n--;
	Xuat_mang(a, n);
void Insert(int a[])
void Sap_xep(int a[], int n) {
	for(int i = 1; i <= n-1; i++) {
		for(int j = i + 1; j <= n; j++) {
			if(a[i]>a[j]) {
				int temp = a[i];
				a[i] = a[j];
				temp = a[j];
			}
		}
	}
	Xuat_mang(a, n);
}
int main() {
	int a[100];
	int n;
	int y;
	do {
		printf("Nhap so luong phan tu trong mang:");
		scanf("%d", &n);
	} while(n<=5||n>=30);
	Nhap_mang(a, n);
	Xuat_mang(a, n);
	printf("\nNhap so thuc y:");
	scanf("%d", &y);
	Negative(a,n,y);
	Positive(a, n);
	printf("\nMang sau khi xoa la:");
	Del(a, n);
	printf("\nMang sau khi sap xep la:");
	Sap_xep(a, n);
	return 0;
}
