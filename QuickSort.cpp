#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input(){
	while (true) 
    {
		cout << " Masukan banyaknya elemen pada array : "; // menampilkan ke layar
		cin >> n; // input dari user
		if (n <= 20) // jika kurang atausama dengan 20
			break; // keluar dari loop
		else
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // menampilkan ke layar
    }
	cout << "\n=====================" << endl;
	cout << "\nMasukan Elemen Array" << endl;
	cout << "\n=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + i) << " > ";
		cin >> arr[i];
    }
}

void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;
	
}

void q_short ( int low, int high)
{
	int temp;
	int pivot, i, j;
	if ( low > high) {
		return;
	}
